#include "NASModules.hpp"
#include "VAStateVariableFilter.h"

Plugin *plugin;

void init(rack::Plugin *p) 
{
	plugin = p;
	p->slug = "NASModules";
	
	#ifdef VERSION
	p->version = TOSTRING(VERSION);
#endif
	p->website = "https://github.com/NikalMight/NAS-Modules";
	
	p->addModel(createModel<EQWidget>("NASModules", "EQ", "EQ", EQUALIZER_TAG));
	//p->addModel(createModel<MightSeqWidget>("NASModules", "Might Sequencer", "Might Sequencer", SEQUENCER_TAG));
	
}