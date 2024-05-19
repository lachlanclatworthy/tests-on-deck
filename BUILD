cc_test(
    name = "hello_test",
    size = "small",
    srcs = ["src/hello_test.cc"],
    deps = ["@com_google_googletest//:gtest_main"],
)

cc_test(
    name = "factorial_test",
    size = "small",
    srcs = ["src/factorial_test.cc", "src/factorial.h"],
    deps = ["@com_google_googletest//:gtest_main"],
)

cc_test(
    name = "queue_test",
    size = "small",
    srcs = ["src/queue.h", "src/queue.cc", "src/queue_test.cc"],
    deps = ["@com_google_googletest//:gtest_main"],
)
