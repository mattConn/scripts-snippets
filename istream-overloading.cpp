//friend definitions
istream & operator>>(istream & in, AddressItem & a)
{
	in >> a.address;
	return in;
}

// usage
AddressItem a;
cin >> a;
