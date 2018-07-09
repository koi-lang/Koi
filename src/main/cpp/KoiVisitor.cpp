#include <cstdio>
using namespace std;

#include "KoiVisitor.hpp"

void KoiVisitor::enterEveryRule(antlr4::ParserRuleContext *ctx) {
    cout << ctx;
}

