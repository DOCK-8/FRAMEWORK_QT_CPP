# CALCULADORA
## CALCULADORA DESING
Primero cree la estructura basada gridslayout, y para las acciones use los QButtonPush, que son botones en qt 
para poder reconocer las entradas, luego de ello reflejamos los resultados de las operaciones en un label, que 
en nuestro caso sera llamado con consola.
Para el usuario pueda ver sus operaciones pasadas genere otro label para guardar ahi estas operaciones
## USER INTERFACE STRUCT
```plaintext
MainWindow/
│
└── CentralWidget/
    │
    ├── VerticalLayoutWidget/
    │   │
    │   ├── QLabel: historial (Deshabilitado)
    │   └── QLabel: consola
    │
    └── GridLayout/
        │
        ├── QPushButton: P_9
        ├── QPushButton: P_7
        ├── QPushButton: P_8
        ├── QPushButton: P_6
        ├── QPushButton: P_5
        ├── QPushButton: P_4
        ├── QPushButton: P_3
        ├── QPushButton: P_2
        ├── QPushButton: P_1
        ├── QPushButton: P_0
        ├── QPushButton: P_clear (C)
        ├── QPushButton: P_Sum (+)
        ├── QPushButton: P_Mul (*)
        ├── QPushButton: P_Div (/)
        └── QPushButton: P_Res (-)
```
## IMAGE
<img src=".\IMG\MC_1.png">
