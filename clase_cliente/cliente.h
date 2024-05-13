#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <ostream>
#include <stdexcept>
#include <ctime>

using namespace std;

class Cliente
{
public:
	Cliente();
	~Cliente();

	void setid(int);
	int getid();

	void setname(string);
	string getname();

	void setRFC(string);
	string getRFC();

	void setfiscalid(int);
	int getfiscalid();

	void setdireccion(string);
	string getdireccion();

	void setciudad(string);
	string getciudad();

	void setestado(string);
	string getestado();

	void setzipcode(string);
	string getzipcode();

	void RegisterCliente();
	void CreateClientesArchive();
	void ReadArchiveCliente();


private:
protected:

	struct Clientes
	{
		int id;
		string name;
		string RFC;
		int fiscal_regimen_id;
		string direccion;
		string ciudad;
		string estado;
		string zipcode;
	};
	Clientes ClientesObject;
	string ModificaLinea(string, int, Clientes&);
	vector<Clientes> VectorClientes;
};
