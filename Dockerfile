FROM ubuntu:latest
WORKDIR '/app'

RUN apt-get update && \
    apt-get --no-install-recommends -y install build-essential cmake libgtest-dev
RUN cd /usr/src/gtest && \
    cmake /usr/src/gtest/CMakeLists.txt
RUN cd /usr/src/gtest/ && \
    make && \
    cp /usr/src/gtest/lib/libgtest*.a /usr/lib

### Running the container with copying the files
### Dockerfile needs to be build after every change
COPY hardcoded_dependency /app

RUN cmake .
RUN make

CMD ["./main"]
