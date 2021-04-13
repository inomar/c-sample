## SetUp

```
docker-compose build
```

## Usage

```
docker-compose run --rm sample /bin/ash
gcc sample/src/hello.c -o sample/src/hello.o && sample/src/hello.o
```
