#ifndef R1NE_H
#define R1NE_H
#include "main.h"


TEST(r1ne, test1) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output6.txt", "wb") : outputFile = fopen("/home/02/minenko/testirovanie/testeditor/tests/output/output6.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input6.txt", MAXLINE) : strncpy(inFile, "/home/02/minenko/testirovanie/testeditor/tests/input/input6.txt", MAXLINE);
    load(txt, inFile);

    r1ne(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected6.txt", "r") : expectedData = fopen("/home/02/minenko/testirovanie/testeditor/tests/expected/expected6.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output6.txt", "r") : outputData = fopen("/home/02/minenko/testirovanie/testeditor/tests/output/output6.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(r1ne, test2) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output1.txt", "wb") : outputFile = fopen("/home/02/minenko/testirovanie/testeditor/tests/output/output1.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input1.txt", MAXLINE) : strncpy(inFile, "/home/02/minenko/testirovanie/testeditor/tests/input/input1.txt", MAXLINE);
    load(txt, inFile);

    r1ne(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected1.txt", "r") : expectedData = fopen("/home/02/minenko/testirovanie/testeditor/tests/expected/expected1.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output1.txt", "r") : outputData = fopen("/home/02/minenko/testirovanie/testeditor/tests/output/output1.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(r1ne, test3) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output5.txt", "wb") : outputFile = fopen("/home/02/minenko/testirovanie/testeditor/tests/output/output5.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input5.txt", MAXLINE) : strncpy(inFile, "/home/02/minenko/testirovanie/testeditor/tests/input/input5.txt", MAXLINE);
    load(txt, inFile);

    r1ne(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected5.txt", "r") : expectedData = fopen("/home/02/minenko/testirovanie/testeditor/tests/expected/expected5.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output5.txt", "r") : outputData = fopen("/home/02/minenko/testirovanie/testeditor/tests/output/output5.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(r1ne, test4) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output9.txt", "wb") : outputFile = fopen("/home/02/minenko/testirovanie/testeditor/tests/output/output9.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input9.txt", MAXLINE) : strncpy(inFile, "/home/02/minenko/testirovanie/testeditor/tests/input/input9.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 1);
    r1ne(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected9.txt", "r") : expectedData = fopen("/home/02/minenko/testirovanie/testeditor/tests/expected/expected9.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output9.txt", "r") : outputData = fopen("/home/02/minenko/testirovanie/testeditor/tests/output/output9.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
#endif // R1NE_H
