struct person {
    char * lastname;
    char * inicials;
    int birthday;
    float oklad;
};
// Створення об'єкту структури
struct person add(char * lastname, char * inicials, int birthday, float oklad){
    struct person peoples = {lastname, inicials, birthday, oklad};
    return peoples;
}
int main(){
    system("chcp 65001");
    // Об'явлення змінних
    struct person peoples[3];
    peoples[0] = add("Iванов      ", "І.І.", 1975, 517.50);
    peoples[1] = add("Tетренко    ", "П.П.", 1956, 219.10);
    peoples[2] = add("Pаніковський", "М.С.", 1967, 300.00);
    // сортування
    struct person temp;
    if(peoples[1].lastname[0] < peoples[0].lastname[0]){
        temp = peoples[1];
        peoples[1] = peoples[0];
        peoples[0] = temp;
    }
    if(peoples[2].lastname[0] < peoples[1].lastname[0]) {
        temp = peoples[2];
        peoples[2] = peoples[1];
        peoples[1] = temp;
    }
    if(peoples[1].lastname[0] < peoples[0].lastname[0]){
        temp = peoples[1];
        peoples[1] = peoples[0];
        peoples[0] = temp;
    }
    // вивід таблиці
    printf(" __________________________________________________________________________________________________________\n");
    printf("|Відділ кадрів\t\t\t\t\t\t\t\t\t\t\t\t   |\n");
    printf("|__________________________________________________________________________________________________________|\n");
    printf("|Прізвище \t\t| Ініціали\t\t | Рік народження\t\t    | Оклад\t\t   |\n");
    printf("|__________________________________________________________________________________________________________|\n");
    for(int i = 0; i < 3; i++){
        printf("|%s\t\t| %s\t\t\t | %d\t\t\t\t    | %.2f\t\t   |\n", peoples[i].lastname, peoples[i].inicials, peoples[i].birthday, peoples[i].oklad);
    }
    printf("|__________________________________________________________________________________________________________|\n");
    printf("|Зауваження: оклад встановлений по стану на 1 січня 2000 року\t\t\t\t\t\t   |\n");
    printf("|__________________________________________________________________________________________________________|\n");
    return 0;
}
