# Makefile generated by OpenModelica
# Platform: linux64

# Simulations use -O3 by default
CC=clang
CXX=clang++
LINK=clang -shared
EXEEXT=
DLLEXT=.so
CFLAGS_BASED_ON_INIT_FILE=
DEBUG_FLAGS=-Os
CFLAGS=$(CFLAGS_BASED_ON_INIT_FILE) $(DEBUG_FLAGS) -fPIC -mfpmath=sse -fno-dollars-in-identifiers ${MODELICAUSERCFLAGS}   
CPPFLAGS= -I"/usr/bin/../include/omc/c" -I. -DOPENMODELICA_XML_FROM_FILE_AT_RUNTIME -DOMC_MODEL_PREFIX=sCO2PBCalculator_Using_JPidea -DOMC_NUM_MIXED_SYSTEMS=0 -DOMC_NUM_LINEAR_SYSTEMS=3 -DOMC_NUM_NONLINEAR_SYSTEMS=47 -DOMC_NDELAY_EXPRESSIONS=0 -DOMC_NVAR_STRING=0
LDFLAGS=-L"/usr/bin/../lib/x86_64-linux-gnu/omc" -L"/usr/bin/../lib" -Wl,-rpath,"/usr/bin/../lib/x86_64-linux-gnu/omc" -Wl,-rpath,"/usr/bin/../lib"     -Wl,--no-as-needed -Wl,--disable-new-dtags -lSimulationRuntimeC -llapack -lblas -lm -lm -lomcgc -lpthread -rdynamic -Wl,--no-undefined 
DIREXTRA=-L"/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/surrogate-sCO2-5/simulation"
MAINFILE=sCO2PBCalculator_Using_JPidea.c
MAINOBJ=sCO2PBCalculator_Using_JPidea.o
CFILES=sCO2PBCalculator_Using_JPidea_functions.c sCO2PBCalculator_Using_JPidea_records.c \
sCO2PBCalculator_Using_JPidea_01exo.c sCO2PBCalculator_Using_JPidea_02nls.c sCO2PBCalculator_Using_JPidea_03lsy.c sCO2PBCalculator_Using_JPidea_04set.c sCO2PBCalculator_Using_JPidea_05evt.c sCO2PBCalculator_Using_JPidea_06inz.c sCO2PBCalculator_Using_JPidea_07dly.c \
sCO2PBCalculator_Using_JPidea_08bnd.c sCO2PBCalculator_Using_JPidea_09alg.c sCO2PBCalculator_Using_JPidea_10asr.c sCO2PBCalculator_Using_JPidea_11mix.c sCO2PBCalculator_Using_JPidea_12jac.c sCO2PBCalculator_Using_JPidea_13opt.c sCO2PBCalculator_Using_JPidea_14lnz.c \
sCO2PBCalculator_Using_JPidea_15syn.c sCO2PBCalculator_Using_JPidea_16dae.c sCO2PBCalculator_Using_JPidea_17inl.c 

OFILES=$(CFILES:.c=.o)
GENERATEDFILES=$(MAINFILE) sCO2PBCalculator_Using_JPidea.makefile sCO2PBCalculator_Using_JPidea_literals.h sCO2PBCalculator_Using_JPidea_functions.h $(CFILES)

.PHONY: omc_main_target clean bundle

# This is to make sure that sCO2PBCalculator_Using_JPidea_*.c are always compiled.
.PHONY: $(CFILES)

omc_main_target: $(MAINOBJ) sCO2PBCalculator_Using_JPidea_functions.h sCO2PBCalculator_Using_JPidea_literals.h $(OFILES)
	$(CC) -I. -o sCO2PBCalculator_Using_JPidea$(EXEEXT) $(MAINOBJ) $(OFILES) $(CPPFLAGS) $(DIREXTRA)  "-L/usr/bin/../lib/x86_64-linux-gnu/omc" -Wl,-rpath="/usr/bin/../lib/x86_64-linux-gnu/omc" "-L/usr/bin/../lib/" -Wl,-rpath="/usr/bin/../lib/" "-L/home/philgun/.openmodelica/binaries/SolarTherm" -Wl,-rpath="/home/philgun/.openmodelica/binaries/SolarTherm" "-L/home/philgun/.local/lib/omlibrary/SolarTherm/Resources/Library/x86_64-linux" -Wl,-rpath="/home/philgun/.local/lib/omlibrary/SolarTherm/Resources/Library/x86_64-linux" "-L/home/philgun/.local/lib/omlibrary/SolarTherm/Resources/Library/linux64" -Wl,-rpath="/home/philgun/.local/lib/omlibrary/SolarTherm/Resources/Library/linux64" "-L/home/philgun/.local/lib/omlibrary/SolarTherm/Resources/Library" -Wl,-rpath="/home/philgun/.local/lib/omlibrary/SolarTherm/Resources/Library" -lModelicaStandardTables -lModelicaIO -lModelicaMatIO -lzlib "-L/home/philgun/.openmodelica/binaries/Modelica" -Wl,-rpath="/home/philgun/.openmodelica/binaries/Modelica" "-L/usr/lib/omlibrary/Modelica 3.2.2/Resources/Library/x86_64-linux" -Wl,-rpath="/usr/lib/omlibrary/Modelica 3.2.2/Resources/Library/x86_64-linux" "-L/usr/lib/omlibrary/Modelica 3.2.2/Resources/Library/linux64" -Wl,-rpath="/usr/lib/omlibrary/Modelica 3.2.2/Resources/Library/linux64" "-L/usr/lib/omlibrary/Modelica 3.2.2/Resources/Library" -Wl,-rpath="/usr/lib/omlibrary/Modelica 3.2.2/Resources/Library" -lModelicaExternalC $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)
clean:
	@rm -f sCO2PBCalculator_Using_JPidea_records.o $(MAINOBJ)

bundle:
	@tar -cvf sCO2PBCalculator_Using_JPidea_Files.tar $(GENERATEDFILES)