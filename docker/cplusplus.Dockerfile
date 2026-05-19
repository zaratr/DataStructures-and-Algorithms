FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        ca-certificates \
        cmake \
        g++ \
        libgtest-dev \
        make \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace/cplusplus

CMD ["bash", "-lc", "cmake -S . -B build && cmake --build build && cd build && ctest --verbose"]
