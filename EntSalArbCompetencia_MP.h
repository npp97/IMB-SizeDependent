void GuardaEstado(estado *es, FILE *archivo);
FILE* OpenFile(char *nombre);
void CreaContenedor(char *nombre);
void GuardaEstadoEn(char *nombre, estado *es);
FILE* AbreRhoVsTEn(char *contenedor);
float ActualizaRhoVsT(estado *es,FILE *archivo,int NoEspecies);
int GuardaTiposEn(char *contenedor, estado *es);
FILE* AbreNoSpeciesVsTEn(char *contenedor);
void ActualizaNoSpeciesVsT(FILE *archivo,int Species, int T);
void GuardaCorrelacion(estado *es,int Rini, int Rfin,char *contenedor);
int CargaEstado(char *contenedor, char *nombre, estado *es, int NDX, int NDY);  //Usar sin haber alojado memoria antes!!!
void GuardaRhoVsT_MP(char *contenedor, Float2D_MP *RhoVsT, Dist_MP *RhoDist);
void GuardaTiposEn_MP(char *contenedor,Float2D_MP *MP_RhoVsT,int T);
void GuardaEstadoEn_MP(char *nombre, estado *es,int id,int ensamble);	
int CargaEstado_MP(char *contenedor, char *nombre, estado *es,int NDX, int NDY,int id,int NoEnsambles);  //Usar sin haber alojado memoria antes!!!
void GuardaCorrelacion_MP(char *contenedor, Float1D_MP *corr);
void GuardaCorrelacionTipo_MP(char *contenedor, Float1D_MP *corr);

