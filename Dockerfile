FROM gcc:latest
FROM ubuntu:24.04
WORKDIR /bufferoverflow
COPY . .
RUN gcc -o challenge challenge.c
CMD ["./challenge"]
RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    libc6-dev \
    && rm -rf /var/lib/apt/lists/*
RUN chmod 711 secret.h
USER ghost
RUN useradd -m ghost
CMD ["./challenge"]