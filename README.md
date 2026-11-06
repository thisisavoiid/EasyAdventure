# EasyAdventure

**A custom-made text adventure engine built with [FTXUI](https://github.com/ArthurSonzogni/FTXUI).**

EasyAdventure is a lightweight, modular text-adventure engine written in modern C++20.  
This repository contains both the engine itself and a complete example implementation that demonstrates how to use it.

The engine lets you define rooms, interactive areas, actions and event-driven logic in a clean and extensible way. The entire user interface is rendered in the terminal using FTXUI.

---

## What is this?

- **Engine** - A small framework for building interactive text adventures  
- **Example** - A short atmospheric escape-room style game set in an abandoned hotel (included as a demonstration of the engine)

The example shows most of the engine’s capabilities in action (item requirements, multi-item actions, room transitions, narrative updates, inventory, etc.).

---

## Core Features

- **Room → Area → Action hierarchy**  
  Rooms contain Areas. Areas contain Actions. Actions can require items and trigger multiple events.

- **Event-driven system**  
  All game logic is handled through `ActionEvent`s:
  - `ChangeRoomEvent`
  - `PickupItemEvent`
  - `ConsumeItemEvent`
  - `NarrativeAddEvent` / `NarrativeSetEvent` / `NarrativeClearEvent`

- **Inventory system** with item requirements and consumption

- **Narrative log** with limited history

- **Terminal UI** powered by FTXUI  
  Split layout with narrative window, inventory and interactive menu. Unavailable actions are visually indicated.

- **Easy to extend**  
  New rooms, items and events can be added with very little code.

---

## Example Game (included)

You wake up in Suite 217 of an abandoned hotel.  
Three lost vinyl records must be found and played in the ballroom to free the Keeper and escape.

This example serves as a practical reference for how to structure content with the engine.

---

## Screenshots

### 1. Main Interface (starting state)
<img width="1113" height="487" alt="Main Interface - starting state" src="https://github.com/user-attachments/assets/53f777c6-2dd9-4d1b-922e-56d36e9ceea4" />

### 2. Action Menu (close-up)
<img width="324" height="173" alt="Action Menu close-up" src="https://github.com/user-attachments/assets/136bb841-4121-47c7-9c64-d8af7fb47210" />

### 3. Gameplay with Inventory & Narrative
<img width="1089" height="509" alt="Gameplay with Inventory and Narrative" src="https://github.com/user-attachments/assets/1deb8baf-cc9b-4246-beeb-7371cd0b059f" />

### 4. Room Navigation Example (Corridor)
<img width="1112" height="523" alt="Room Navigation - Corridor" src="https://github.com/user-attachments/assets/8c42f752-91fc-415c-b891-0c63a485b055" />

---

## Building

### Requirements
- Visual Studio 2022 (or later) with C++20 support
- FTXUI (expected in `external/ftxui/`)

### Steps
1. Open `EasyAdventure.slnx` (or the `.vcxproj`)
2. Make sure the FTXUI include and library paths are correct
3. Build in Debug or Release (x64 recommended)

---

## Project Structure (Core)

| Component                | Purpose                                |
|--------------------------|----------------------------------------|
| `Action` / `ActionEvent` | Commands and their effects             |
| `Area`                   | Interactive hotspot inside a room      |
| `Room`                   | Collection of areas                    |
| `RoomManager`            | Manages rooms and the current location |
| `InventoryManager`       | Handles player inventory               |
| `NarrativeManager`       | Manages the narrative log              |
| `TextAdventureGame`      | Main application & FTXUI UI            |

---

## License

MIT License - see [LICENSE](LICENSE)
