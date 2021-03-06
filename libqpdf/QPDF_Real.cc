#include <qpdf/QPDF_Real.hh>

#include <qpdf/QUtil.hh>

QPDF_Real::QPDF_Real(std::string const& val) :
    val(val)
{
}

QPDF_Real::QPDF_Real(double value, int decimal_places) :
    val(QUtil::double_to_string(value, decimal_places))
{
}

QPDF_Real::~QPDF_Real()
{
}

std::string
QPDF_Real::unparse()
{
    return this->val;
}

std::string
QPDF_Real::getVal()
{
    return this->val;
}
