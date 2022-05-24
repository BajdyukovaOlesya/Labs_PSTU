#include <iostream>
#include <SFML/Graphics.hpp>
#include<string>
using namespace std;
using namespace sf;
int n;
int e = 0;

int sum = 0;
int f;
float r;
RenderWindow MainWindow(VideoMode(800, 600), "Graph");

struct coord {
    int x, y;
};
coord mas[30];

void drawKrug(int x1, int y1, float R);
void drawInfo(int a, int& x1, int& y1);
void draw_verh(int n);
void drawLine(int& a, int x1, int y1, int x2, int y2);
void set_coord(int& i, int& n);

class Graph {
private:
    vector <int> verh;
    int size;
    vector<vector<int>> matr;
    vector<int> min_put;
    vector<vector<int>> matr1;
public:
    Graph(int s) {
        this->size = s + 2;
        this->matr = vector<vector<int>>(size, vector<int>(size));
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                this->matr[i][j] = 0;
            }
        }
    }
    Graph() {
        size = 3;
        this->matr = vector<vector<int>>(size, vector<int>(size));
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                this->matr[i][j] = 0;
            }
        }

    }
    ~Graph() {}
    void print_m() {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << "   " << matr[i][j] << "   ";
            }
            cout << endl;
        }
    }
    void set_size(int s) {
        this->size = s + 2;
    }
    int get_size() {
        return size;
    }
    void vershins(vector<int>& v) {
        matr[0][0] = 99;
        for (int j = 1; j < size - 1; j++) {
            matr[0][j] = v[j - 1];
            matr[j][0] = v[j - 1];
            verh.push_back(v[j - 1]);
        }

    }
    void ves() {
        for (int i = 1; i < size - 1; i++) {
            for (int j = 1; j < size - 1; j++) {
                cout << "ves " << i << " -> " << j << endl;
                cin >> matr[i][j];
            }
        }
        matr1 = matr;
    }

    int getpoz(int& t) {
        for (int i = 0; i < verh.size(); i++) {
            if (verh[i] == t) return i;
        }
        return -1;
    }

    int min_stroka(int& i) {
        int min = 100;
        for (int j = 1; j < size - 1; j++) {
            if ((matr[i][j] < min) && (matr[i][j] != 99)) min = matr[i][j];
        }
        if (min != 100) return min;
        else return 0;
    }

    int min_stolb(int& j) {
        int min = 100;
        for (int i = 1; i < size - 1; i++) {
            if ((matr[i][j] < min) && (matr[i][j] != 99)) min = matr[i][j];
        }
        if (min != 100) return min;
        else return 0;
    }

    void reduk_strok(int& i) {
        for (int j = 1; j < size - 1; j++) {
            if ((i != j) && (matr[i][j] != 99)) matr[i][j] = matr[i][j] - matr[i][size - 1];
        }
    }

    void reduk_stolb(int& j) {
        for (int i = 1; i < size - 1; i++) {
            if ((i != j) && (matr[i][j] != 99))  matr[i][j] = matr[i][j] - matr[size - 1][j];
        }
    }
    int min_stroka_2(int& i, int j1) {
        int min = 100;
        for (int j = 1; j < size - 1; j++) {
            if ((matr[i][j] < min) && (i != j) && (j != j1) && (matr[i][j] != 99)) min = matr[i][j];
        }
        if (min != 100) return min;
        else return 0;
    }

    int min_stolb_2(int& j, int i1) {
        int min = 100;
        for (int i = 1; i < size - 1; i++) {
            if ((matr[i][j] < min) && (i != j) && (i != i1) && (matr[i][j] != 99)) min = matr[i][j];
        }
        if (min != 100) return min;
        else return 0;
    }

    int podschet_put() {
        int f1 = 0;
        for (int i = 1; i < size - 1; i++) {
            for (int j = 1; j < size - 1; j++) {
                if ((matr[i][j] != 99) && (matr[i][j] != 0))  f1 += 1;
            }
        }
        return f1;
    }

    void komi() {
        f = podschet_put();
        while (f > 0) {
            for (int i = 1; i < size - 1; i++) matr[i][size - 1] = min_stroka(i);
            for (int i = 1; i < size - 1; i++) reduk_strok(i);
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    cout << "   " << matr[i][j] << "   ";
                }
                cout << endl;
            }
            for (int j = 1; j < size - 1; j++) matr[size - 1][j] = min_stolb(j);
            for (int j = 1; j < size - 1; j++) reduk_stolb(j);
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    cout << "   " << matr[i][j] << "   ";
                }
                cout << endl;
            }
            vector<vector<int>> matr_ocenok;
            matr_ocenok = vector<vector<int>>(size - 2, vector<int>(size - 2));
            for (int i = 0; i < size - 2; i++) {
                for (int j = 0; j < size - 2; j++) {
                    matr_ocenok[i][j] = 0;
                }
            }
            for (int i = 1; i < size - 1; i++) {
                for (int j = 1; j < size - 1; j++) {
                    if (matr[i][j] == 0) matr_ocenok[i - 1][j - 1] = min_stroka_2(i, j) + min_stolb_2(j, i);
                }
            }
            for (int i = 0; i < size - 2; i++) {
                for (int j = 0; j < size - 2; j++) {
                    cout << matr_ocenok[i][j] << ' ';
                }
                cout << endl;
            }

            int max = 0;
            for (int i = 0; i < size - 2; i++) {
                for (int j = 0; j < size - 2; j++) {
                    if (matr_ocenok[i][j] > max) max = matr_ocenok[i][j];
                }
            }
            int i1 = 0;
            int j1 = 0;
            for (int i = 0; i < size - 2; i++) {
                for (int j = 0; j < size - 2; j++) {
                    if (matr_ocenok[i][j] == max) { i1 = i + 1; j1 = j + 1; }
                }
            }
            sum = sum + matr1[i1][j1];
            for (int i = 1; i < size - 1; i++) {
                matr[i1][i] = 99;
                matr[i][j1] = 99;
            }
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    cout << "   " << matr[i][j] << "   ";
                }
                cout << endl;
            }

            min_put.push_back(i1);
            min_put.push_back(j1);
            f = podschet_put();
        }
        for (int i = 1; i < size - 1; i++) {
            for (int j = 1; j < size - 1; j++) {
                if (matr[i][j] == 0) { min_put.push_back(i); min_put.push_back(j); sum = sum + matr1[i][j]; }
            }
        }
        for (int i = 0; i < min_put.size(); i++) {
            cout << min_put[i] << "->";
        }
        cout << "end" << endl << "Min put': " << sum;

    }

    Graph& operator=(Graph& gra) {
        this->size = gra.size;
        this->verh = gra.verh;
        this->matr = gra.matr;
        this->matr1 = gra.matr1;
        return *this;
    }
    void draw_g() {
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            set_coord(i, n);
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int a = matr1[i][j];
                if (a != 99) drawLine(a, mas[i].x, mas[i].y, mas[j].x, mas[j].y);
            }
        }
        for (int i = 0; i < n; i++) {
            cout << mas[i].x << " , " << mas[i].y << " ; ";
        }
        draw_verh(n);
    }

};



Graph g;

void drawKrug(int x1, int y1, float R) {
    CircleShape circle(30);
    circle.setPosition(x1,y1);
    circle.setFillColor(Color::Green);
    MainWindow.draw(circle);
}

void drawInfo(int a, int& x1, int& y1) {
    Text text;
    Font font;
   font.loadFromFile("Koulen-Regular.ttf");
    text.setFillColor(Color::Black);
    text.setCharacterSize(14);
    text.setStyle(Text::Bold);
    string s;
    s = to_string(a);
    text.setString(s);
    text.setPosition(x1,y1);
    MainWindow.draw(text);
}

void draw_verh(int n) {
    for (int i = 0; i < n; i++) {
        drawKrug(mas[i].x, mas[i].y, r);
        drawInfo((1 + i), mas[i].x, mas[i].y);
    }

}


void drawLine(int& a, int x4, int y4, int x5, int y5) {
    VertexArray line(sf::LinesStrip, 2);
    Color color;
    color = Color::Black;
    line[0].position.x = x4;
    line[0].position.y = y4;
    line[0].color = color;
    line[1].position.x = x5;
    line[1].position.y = y5;
    line[1].color = color;
    MainWindow.draw(line);
  /* vector<Vertex> line = {
        Vertex(Vector2f(x1,y1),Color::Black),
         Vertex(Vector2f(x2,y2),Color::Black)
    };
    MainWindow.draw(&line[0],line.size(),Lines);*/
    int x3, y3;
    x3 = x4 + x5 / 2 + 10;
    y3 = y4 + y5 / 2 + 10;
    drawInfo(a,x3,y3);
}



void set_coord(int& i, int& n) {
    float r1;
    r = 5 * (300 / 13) / n;
    r1 = 300 / 2 - r - 10;
    float u = 2.0f * 3.1415926f * i / n;
    float x1, y1;
    x1= r1 * sin(u) + 400;
    y1= r1 * cos(u) + 300;
    mas[i].x = x1;
    mas[i].y = y1;
}




int main(int argc, char** argv)
{
    
    cout << "Vvedite size: ";
    cin >> n;
    Graph gr(n);
    vector<int>p;
    cout << "Vvedite vershins: ";
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        p.push_back(a);
    }
    gr.vershins(p);
    cout << "Vvedite ves reber: \n";
    gr.ves();
    cout << "Matr smezh\n";
    g = gr;
    gr.print_m();
    gr.komi();
    while (MainWindow.isOpen()){
        Event event;
        while (MainWindow.pollEvent(event))
        {
            if (event.type == Event::Closed)
                MainWindow.close();
        }

        MainWindow.clear(Color::White);
        g.draw_g();
        MainWindow.display();
    }

    return 0;
}





