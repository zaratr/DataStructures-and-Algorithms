FROM mcr.microsoft.com/dotnet/sdk:8.0

ENV DEBIAN_FRONTEND=noninteractive
ENV LANG=C.UTF-8
ENV LC_ALL=C.UTF-8

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        bash \
        build-essential \
        ca-certificates \
        findutils \
        openjdk-17-jdk \
        python3 \
        python3-pip \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace/leetcode-questions

COPY docker/leetcode-questions-run-tests.sh /usr/local/bin/leetcode-questions-run-tests
RUN chmod +x /usr/local/bin/leetcode-questions-run-tests

CMD ["leetcode-questions-run-tests"]
