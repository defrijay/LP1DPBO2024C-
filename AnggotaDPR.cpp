#include <iostream>
#include <vector>
#include <string>

using namespace std;

class AnggotaDPR
{
private:
    int id;
    string name;
    string field;
    string party;

public:
    AnggotaDPR(int id, string name, string field, string party)
    {
        this->id = id;
        this->name = name;
        this->field = field;
        this->party = party;
    }

    // Getters and Setters
    int getId()
    {
        return id;
    }
    void setId(int id)
    {
        this->id = id;
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getField()
    {
        return field;
    }
    void setField(string field)
    {
        this->field = field;
    }
    string getParty()
    {
        return party;
    }
    void setParty(string party)
    {
        this->party = party;
    }
};

class DPR
{
private:
    vector<AnggotaDPR> anggotaDPRList;

public:
    void tambahAnggotaDPR(AnggotaDPR anggota)
    {
        anggotaDPRList.push_back(anggota);
    }

    void ubahAnggotaDPR(int id, string name, string field, string party)
    {
        for (int i = 0; i < anggotaDPRList.size(); ++i)
        {
            if (anggotaDPRList[i].getId() == id)
            {
                anggotaDPRList[i].setName(name);
                anggotaDPRList[i].setField(field);
                anggotaDPRList[i].setParty(party);
                break;
            }
        }
    }

    void hapusAnggotaDPR(int id)
    {
        for (auto it = anggotaDPRList.begin(); it != anggotaDPRList.end(); ++it)
        {
            if ((*it).getId() == id)
            {
                anggotaDPRList.erase(it);
                break;
            }
        }
    }

    void tampilkanAnggotaDPR()
    {
        cout << "=================================================================" << endl;
        cout << "| ID\t| Nama\t\t| Bidang\t| Partai\t|" << endl;
        cout << "=================================================================" << endl;
        for (int i = 0; i < anggotaDPRList.size(); ++i)
        {
            cout << "| " << anggotaDPRList[i].getId() << "\t| " << anggotaDPRList[i].getName() << "\t\t| " << anggotaDPRList[i].getField() << "\t\t| " << anggotaDPRList[i].getParty() << "\t\t|" << endl;
        }
        cout << "=================================================================" << endl;
    }
};