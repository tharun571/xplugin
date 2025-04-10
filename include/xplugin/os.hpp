#ifndef XPLUGIN_OS_MAGIC_HPP
#define XPLUGIN_OS_MAGIC_HPP

#include <string>
#include "xmagics.hpp"
#include "xplugin_config.hpp"

namespace xp
{
    class XPLUGIN_API writefile: public xmagic_cell
    {
    public:
        virtual void operator()(const std::string& line, const std::string& cell) override;
    };
}
#endif
