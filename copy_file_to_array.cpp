// copys grades to an array of structs
void copyFile(ifstream &file, student list[])
{
    if (!file)
    {
        cout << "File not found. Exiting." << endl;
        exit(EXIT_FAILURE);

    }
    double tmp;
    int i = 0;
    while (!file.eof())
    {
        file >> list[i].id >> list[i].quiz1 >> list[i].quiz2 >> list[i].midterm >> list[i].final;
        i++;
    }
}
