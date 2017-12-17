#include "NASModules.hpp"
#include <iostream>
#include <cmath>
#include <random>
#include "Dsp.h"

struct Eq: Module
{
    enum ParamIds
    {
        HP_FREQ_PARAM,
        LOSHELF_FREQ_PARAM,
        LOSHELF_GAIN_PARAM,
        LOMID_PEAK_FREQ_PARAM,
        LOMID_GAIN_PARAM,
        HIMID_PEAK_FREQ_PARAM,
        HISHELF_FREQ_PARAM,
        HISHELF_GAIN_PARAM,
        LP_FREQ_PARAM,
        NUM_PARAMS
    };

    enum InputIds
    {
        CH1_INPUT,
        HP_FREQ_INPUT,
        LOSHELF_FREQ_INPUT,
        LOSHELF_GAIN_INPUT,
        LOMID_PEAK_FREQ_INPUT,
        LOMID_GAIN_INPUT,
        HIMID_PEAK_FREQ_INPUT,
        HISHELF_FREQ_INPUT,
        HISHELF_GAIN_INPUT,
        LP_FREQ_INPUT,
        NUM_INPUTS
    };

    enum OutputIds 
    {
        CH1_OUTPUT,
        NUM_OUTPUTS
    };

    //Filter declarations

    EQ(): Module(NUM_PARAMS, NUM_INPUTS, NUM_OUTPUTS){}
    void step() override;

    void EQ::step()
    {
        //do stuff
    }

    EQWidget::EQWidget()
    {
        //do widget stuff
    }
}