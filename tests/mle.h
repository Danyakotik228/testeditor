#ifndef MLE_H
#define MLE_H
#include "main.h"

TEST(mle, test1) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output7.txt", "wb") : outputFile = fopen("/home/02/minenko/testirovanie/testeditor/tests/output/output7.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input7.txt", MAXLINE) : strncpy(inFile, "/home/02/minenko/testirovanie/testeditor/tests/input/input7.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 3);
    mle(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected7.txt", "r") : expectedData = fopen("/home/02/minenko/testirovanie/testeditor/tests/expected/expected7.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output7.txt", "r") : outputData = fopen("/home/02/minenko/testirovanie/testeditor/tests/output/output7.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mle, test2) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output8.txt", "wb") : outputFile = fopen("/home/02/minenko/testirovanie/testeditor/tests/output/output8.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input8.txt", MAXLINE) : strncpy(inFile, "/home/02/minenko/testirovanie/testeditor/tests/input/input8.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 7);
    mle(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected8.txt", "r") : expectedData = fopen("/home/02/minenko/testirovanie/testeditor/tests/expected/expected8.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output8.txt", "r") : outputData = fopen("/home/02/minenko/testirovanie/testeditor/tests/output/output8.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mle, test3) {

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


    mle(txt);
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
#endif // MLE_H
