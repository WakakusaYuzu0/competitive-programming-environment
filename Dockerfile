FROM ubuntu:latest

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y --no-install-recommends locales && \
    localedef -f UTF-8 -i ja_JP ja_JP.UTF-8
ENV LANG ja_JP.UTF-8
ENV LANGUAGE ja_JP:ja
ENV LC_ALL ja_JP.UTF-8
ENV TZ JST-9

RUN apt-get install -y --no-install-recommends \
        g++ \
        git \
        npm \
        python3-pip &&\
    apt-get clean &&\
    rm -rf /var/lib/apt/lists/*

RUN git clone https://github.com/atcoder/ac-library.git /lib/ac-library
ENV CPLUS_INCLUDE_PATH /lib/ac-library

RUN pip3 install atcoder-tools online-judge-tools
RUN npm install -g atcoder-cli

RUN mkdir /work && mkdir -p /root/.config/atcoder-cli-nodejs/cpp

ENV ACC_CONFIG_DIR /root/.config/atcoder-cli-nodejs/cpp
# rename template.cpp
COPY template/template.cpp ACC_CONFIG_DIR/main.cpp
COPY template/template.json ACC_CONFIG_DIR/root/.config/atcoder-cli-nodejs/cpp/