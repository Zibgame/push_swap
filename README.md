# 🔄 push_swap — Zibrian Cadinot (École 42)

> Projet de l’**École 42** qui consiste à trier une pile d’entiers en utilisant un ensemble d’instructions limitées.  
> L’objectif est de développer un **algorithme de tri optimal** en C, tout en respectant des **contraintes de performance et de complexité**.

---

## 🧠 Objectif du projet

Le but du projet **push_swap** est de trier des nombres en utilisant deux piles (`a` et `b`) et un ensemble restreint d’opérations.  
L’algorithme doit produire **le moins de mouvements possibles** pour atteindre un tri complet.

Ce projet t’apprend à :
- Concevoir des **algorithmes efficaces** (tri rapide, radix, etc.)
- Gérer la **mémoire dynamique**
- Manipuler des **structures de données** (listes chaînées, piles)
- Respecter les **contraintes strictes** d’un environnement bas niveau

---

## ⚙️ Règles du projet

### Deux piles :
- `a` → contient les entiers à trier  
- `b` → pile vide au départ, utilisée temporairement  

### Instructions autorisées :
| Commande | Description |
|-----------|-------------|
| `sa` | swap les 2 premiers éléments de `a` |
| `sb` | swap les 2 premiers éléments de `b` |
| `ss` | `sa` et `sb` en même temps |
| `pa` | push le premier élément de `b` vers `a` |
| `pb` | push le premier élément de `a` vers `b` |
| `ra` | fait tourner `a` vers le haut |
| `rb` | fait tourner `b` vers le haut |
| `rr` | `ra` et `rb` en même temps |
| `rra` | fait tourner `a` vers le bas |
| `rrb` | fait tourner `b` vers le bas |
| `rrr` | `rra` et `rrb` en même temps |

---

## 📦 Installation

### 1. Cloner le dépôt
```bash
git clone https://github.com/Zibgame/push_swap.git
cd push_swap
