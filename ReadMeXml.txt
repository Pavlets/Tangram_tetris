Прежде чем приступить к работе с xml-файлом следует:
1) В папку проэкта нужно добавить data_xml.h и xmlfile
2) В Visual Studio, в обозревателе решений, в файлы ресурсов нужно добавить data_xml.h
3) К каждой форме уровня(именно уровня с 1 по 11, больше никуда не надо добавлять) нужно добавить #include "data_xml.h"
4) В private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) (ну или там где будет применяться работа с xml-файлом) создаем обьект от класса GetData
5) Создаем переменную String^ level = "(номер уровня 1-11)". Создаем переменную String^ field;
6) Вызываем функцию XmlToData. Пример вызова XmlToData(level, &obj.f_1, &obj.f_2, &obj.f_3, &obj.f_4, &obj.f_5, &obj.f_6, &obj.f_7, &size_field, &field);
7) Используем созданный обьект класса в своих целях