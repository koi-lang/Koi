#include <cstdio>
using namespace std;

#include "antlr4-runtime.h"
#include "KoiLexer.h"
#include "KoiParser.h"
#include "KoiVisitor.hpp"

int main() {
    string floc = "../examples/Koi/inputs.koi";
    string content;
    string line;

    ifstream infile (floc, ios::in);

    if (infile.is_open()) {
        while (!infile.eof()) {
            getline(infile, line);

            content += line + "\n";
        }
        infile.close();
    }

    // cout << content << endl;

    antlr4::ANTLRInputStream input(content);
    KoiLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    KoiParser parser(&tokens);

    antlr4::tree::ParseTree *tree = parser.keyword();
    KoiVisitor listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    return 0;
}