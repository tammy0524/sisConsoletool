#include "addressprovider_817_r128k.h"

#include "addressprovider/addresstable/addresstable_817_r128k.h"
#include "sislog.h"

using namespace SiS::Procedure;

AddressProvider_817_r128k::AddressProvider_817_r128k()
{
    AddressProvider_817_r128k::createAddressTable();
}

AddressProvider_817_r128k::~AddressProvider_817_r128k()
{

}

std::string
AddressProvider_817_r128k::getTableName()
{
    return "ADDRESS_TABLE_817_R128K";
}

void
AddressProvider_817_r128k::createAddressTable()
{
    AddressProvider_817_r128k::loadAddressTableFromAddressTableString();
}

std::string
AddressProvider_817_r128k::getAddressTableString()
{
    return ADDRESS_TABLE_817_R128K;
}

void
AddressProvider_817_r128k::loadAddressTableFromAddressTableString()
{
    std::string addressTableString = AddressProvider_817_r128k::getAddressTableString();

    std::vector<AddressAttribute> addressAttributes = parseAddressTableString(addressTableString);

    for (int i = 0; i < addressAttributes.size(); i++)
    {
        insertAddressAttribute( addressAttributes[i] );
    }
}
