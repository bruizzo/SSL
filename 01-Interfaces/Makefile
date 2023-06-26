all: tests tablas_de_conversion

tablas_de_conversion: Conversion.o
	gcc TablasDeConversion.c Conversion.o -o TablasDeConversion
	./TablasDeConversion

conversion.o: Conversion.c
	gcc -c Conversion.c

conversion_tests: conversion.o
	gcc ConversionTest.c Conversion.o -o ConversionTest

tests: conversion_tests
	./ConversionTest

clean:
	rm -rf ConversionTests TablasDeConversion *.o