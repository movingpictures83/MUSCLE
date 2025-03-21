#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "MUSCLEPlugin.h"

void MUSCLEPlugin::input(std::string file) {
 inputfile = file;
 std::ifstream ifile(inputfile.c_str(), std::ios::in);
 while (!ifile.eof()) {
   std::string key, value;
   ifile >> key;
   ifile >> value;
   parameters[key] = value;
   }
 }
 
void MUSCLEPlugin::run() {
}

void MUSCLEPlugin::output(std::string file) {

//std::string command = "export OLDPATH=${PYTHONPATH}; export PYTHONPATH=${PYTHON2_DIST_PACKAGES}:${PYTHON2_SITE_PACKAGES}:${PYTHONPATH};";
//align_seqs.py -i HMP_MOCK.v35.fasta -m muscle -o output
//command += "align_seqs.py -i "+inputfile+" -m muscle -o "+file+"; cp "+file+"/*_aligned.fasta "+PluginManager::prefix();
//command += "; export PYTHONPATH=OLDPATH" ;
	std::string command = "muscle -in "+inputfile+" -out "+file;
       	system(command.c_str());
}

PluginProxy<MUSCLEPlugin> MUSCLEPluginProxy = PluginProxy<MUSCLEPlugin>("MUSCLE", PluginManager::getInstance());
