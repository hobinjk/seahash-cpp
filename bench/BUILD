cc_binary(
    name = "bench",
    srcs = ["bench.cpp"],
    deps = [
        "//lib:seahash",
        "@benchmark//:main",
    ],
    copts = [
      "-Iexternal/benchmark/include",
    ],
)

