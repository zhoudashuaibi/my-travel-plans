#define mu_assert(test...)                                  \
    do                                                      \
    {                                                       \
        if (!(VA_FIRST(test)))                              \
        {                                                   \
            printf(BORED FAIL ENDL                          \
                   "|\\_[" BORED "FAIL" RST                 \
                   "] at " BOWHT "./%s:%d" RST              \
                   " for '" BOYEL "%s" RST "' ",            \
                   __FILE__, __LINE__, VA_FIRST_STR(test)); \
            if (VA_NARG(test) == 1)                         \
                printf(BORED FAIL);                         \
            else                                            \
                printf(BORED FAIL " " FMAG VA_REST(test));  \
            printf(ENDL);                                   \
            return 1;                                       \
        }                                                   \
    } while (0)

static int n_test; /* number of tests */
static int n_pass; /* number of tests passed */
static int n_fail; /* number of tests failed */

#define mu_run_test(test)                                 \
    do                                                    \
    {                                                     \
        ++n_test;                                         \
        printf("|- " BOWHT "%s" FBLK " ./%s:%d ... " RST, \
               #test, __FILE__, __LINE__);                \
        if (!test)                                      \
        {                                                 \
            ++n_pass;                                     \
            printf(BOGRN PASS ENDL);                      \
        }                                                 \
        else                                              \
            ++n_fail;                                     \
    } while (0)

void mu_test_results()
{
    printf("\\_________________________________\n");
    printf(BOGRN "%d " PASS RST " and ", n_pass);
    printf(n_fail ? BORED "%d " FAIL : BOLD FBLK "%d " FAIL, n_fail);
    printf(RST " in " BOWHT "%d" RST " TEST(S)" ENDL, n_test);
    if (n_pass == n_test)
        printf(BOGRN "==== ALL TESTS PASSED ====" ENDL);
    else
        printf(BORED "#### %d TEST(S) FAILED ####" ENDL, n_fail);
}

#endif /* MINI_UNIT_H */
