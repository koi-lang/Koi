#ifndef KOI_KOICOMPILER_HPP
#define KOI_KOICOMPILER_HPP

#include "KoiBaseListener.h"

class KoiVisitor : public KoiBaseListener {
    void enterEveryRule(antlr4::ParserRuleContext *ctx) override;
};


#endif //KOI_KOICOMPILER_HPP
