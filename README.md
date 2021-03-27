# Push The Button
Push The Button is a horror game with a single button. 

Schematic:

```text
       ┌──────────────┐
       │              │
       │              │
       │        pin 10├──────┐
       │              │      │
       │              │      │
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
       │   push button           │
       │                         │
       └─────────────────────────┘
```

