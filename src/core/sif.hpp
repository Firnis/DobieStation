#ifndef SIF_HPP
#define SIF_HPP
#include <cstdint>

class SubsystemInterface
{
    private:
        uint32_t msflag;
        uint32_t smflag;
    public:
        SubsystemInterface();

        void reset();

        uint32_t get_msflag();
        uint32_t get_smflag();
        void set_msflag(uint32_t value);
        void set_smflag(uint32_t value);
};

#endif // SIF_HPP
