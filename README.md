# Push The Button
Push The Button is a horror game with a single button. 

Schematic:

```text
       ┌──────────────┐                 Parts List:
       │              │
       │              │                 - 1 arduino micro
       │        pin 10├──────┐          - 1 pushbutton
       │              │      │          - 1 speaker/buzzer
       │              │      │          - 1 resistor (any value)
       │           GND├──┬──---──┐
       │              │  │   │   │
       │   Arduino    │  < r1│   │
       │    micro     │  >   │   │
       │              │  │   │   │
       │         pin 4├──┤   │   │
       │              │  │   │   │
       │              │  │   │   │
┌──────┤5v            │  │   │   │
│      │              │  │   │   │
│      │              │  │   │   │
│      │              │  │   │   │
│      └──────────────┘  │   │   │
│                        │   │   │
│           speaker      │   │   │
│             xxx        │   │   │
│            x   x       │   │   │
│           x     x      │   │   │
│      ┌────x  x  x──────┼───┘   │
│      │    x     x      │       │
│      │     x   x       │       │
│      │      xxx        │       │
│      │                 │       │
│      │                 │       │
│      │        |        │       │
│      │     o─────o     │       │
│      │                 │       │
└─────---────o     o─────┘       │
       │                         │
       │   pushbu-ton            │
       │                         │
       └─────────────────────────┘
```

