# Codeforces Graph Practice — 30 Problem Tracker

**Target:** Codeforces problems rated **2100–2300**, mostly from older contests (2010–2021).

**How to use this tracker**
- Solve in the suggested order, but feel free to jump between topics.
- Before reading an editorial, write down the key observation and try to derive the algorithm yourself.
- After solving, record the date, your approach, and the mistake or insight worth remembering in your own notes.
- Check the box only after you can explain the solution and implement it again without copying.

---

## Stage 1 — Shortest paths and path modelling

- [ ] **1433G — Reducing Delivery Cost** · **2100** · [Problem](https://codeforces.com/problemset/problem/1433/G)  
  Teaches repeated shortest-path calculations and evaluating the effect of making a chosen edge free.
- [ ] **567E — President and Roads** · **2200** · [Problem](https://codeforces.com/problemset/problem/567/E)  
  Teaches shortest-path edge classification using distances from the source and destination, including how to make an edge mandatory.
- [ ] **1196F — K-th Path** · **2200** · [Problem](https://codeforces.com/problemset/problem/1196/F)  
  Teaches exploiting small `k` in a huge sparse graph instead of computing all-pairs shortest paths.
- [ ] **1486E — Paired Payment** · **2200** · [Problem](https://codeforces.com/problemset/problem/1486/E)  
  Teaches state-expanded Dijkstra when the cost of the next move depends on the previous edge.
- [ ] **1343E — Weights Distributing** · **2100** · [Problem](https://codeforces.com/problemset/problem/1343/E)  
  Teaches combining BFS distances from three sources with sorted edge costs and prefix sums.

## Stage 2 — Connectivity, bridges, cycles and graph construction

- [ ] **920E — Connected Components?** · **2100** · [Problem](https://codeforces.com/problemset/problem/920/E)  
  Teaches finding connected components in a complement graph efficiently with a set of unvisited vertices.
- [ ] **1000E — We Need More Bosses** · **2100** · [Problem](https://codeforces.com/problemset/problem/1000/E)  
  Teaches bridge-finding, contracting 2-edge-connected components, and finding the diameter of the bridge tree.
- [ ] **652E — Pursuit For Artifacts** · **2300** · [Problem](https://codeforces.com/problemset/problem/652/E)  
  Teaches reasoning about bridges and 2-edge-connected components to determine whether a marked edge can be used on a route.
- [ ] **1037E — Trips** · **2200** · [Problem](https://codeforces.com/problemset/problem/1037/E)  
  Teaches `k`-core peeling and reversing edge additions to process a changing graph offline.
- [ ] **1470D — Strange Housing** · **2200** · [Problem](https://codeforces.com/problemset/problem/1470/D)  
  Teaches a DFS-based construction of an independent set whose incident edges keep the resulting passage network connected.

## Stage 3 — MST, DSU and structural graph processing

- [ ] **609E — Minimum Spanning Tree for Each Edge** · **2100** · [Problem](https://codeforces.com/problemset/problem/609/E)  
  Teaches MST + LCA/binary lifting: force an edge into the MST and replace the maximum-weight edge on the resulting tree path.
- [ ] **1108F — MST Unification** · **2100** · [Problem](https://codeforces.com/problemset/problem/1108/F)  
  Teaches processing equal-weight edges as a group during Kruskal rather than updating DSU too early.
- [ ] **160D — Edges in MST** · **2300** · [Problem](https://codeforces.com/problemset/problem/160/D)  
  Teaches classifying edges as in every, some, or no MST using Kruskal batches and bridges in a temporary graph.
- [ ] **1278D — Segment Tree** · **2100** · [Problem](https://codeforces.com/problemset/problem/1278/D)  
  Teaches building an interval-crossing graph implicitly with a sweep line, then using DSU/tree properties.
- [ ] **1466F — Euclid's Nightmare** · **2100** · [Problem](https://codeforces.com/problemset/problem/1466/F)  
  Teaches modelling one- and two-coordinate constraints as graph/DSU connectivity and selecting independent contributions.

## Stage 4 — Directed graphs, SCC, 2-SAT and DAG/graph DP

- [ ] **1213F — Unstable String Sort** · **2100** · [Problem](https://codeforces.com/problemset/problem/1213/F)  
  Teaches building a directed constraint graph, contracting strongly connected components, and assigning values on the condensation DAG.
- [ ] **27D — Ring Road 2** · **2200** · [Problem](https://codeforces.com/problemset/problem/27/D)  
  Teaches converting chord-intersection conflicts into a 2-SAT implication graph.
- [ ] **1217D — Coloring Edges** · **2100** · [Problem](https://codeforces.com/problemset/problem/1217/D)  
  Teaches using directed-cycle structure/topological ordering to color edges so each color class is acyclic.
- [ ] **1472G — Moving to the Capital** · **2100** · [Problem](https://codeforces.com/problemset/problem/1472/G)  
  Teaches combining BFS distances with DP for paths that may use one special backward move.
- [ ] **915D — Almost Acyclic Graph** · **2200** · [Problem](https://codeforces.com/problemset/problem/915/D)  
  Teaches directed-cycle detection and testing whether removing one edge can make a graph acyclic.

## Stage 5 — Trees, rerooting and tree DP

- [ ] **734E — Anton and Tree** · **2100** · [Problem](https://codeforces.com/problemset/problem/734/E)  
  Teaches compressing adjacent equal-color vertices into components, then using the diameter of the resulting tree.
- [ ] **570D — Tree Requests** · **2200** · [Problem](https://codeforces.com/problemset/problem/570/D)  
  Teaches Euler Tour + depth grouping + bitmask parity for subtree/depth palindrome queries.
- [ ] **486D — Valid Sets** · **2100** · [Problem](https://codeforces.com/problemset/problem/486/D)  
  Teaches counting connected vertex subsets with a bounded value range using rooted tree DP and careful counting.
- [ ] **543D — Road Improvement** · **2300** · [Problem](https://codeforces.com/problemset/problem/543/D)  
  Teaches rerooting DP and passing aggregate information from a parent to its children efficiently.
- [ ] **1187E — Tree Painting** · **2100** · [Problem](https://codeforces.com/problemset/problem/1187/E)  
  Teaches subtree-size rerooting: derive the answer for every possible root from one DFS result.

## Stage 6 — Flow, matching and non-standard shortest-path models

- [ ] **498C — Array and Operations** · **2100** · [Problem](https://codeforces.com/problemset/problem/498/C)  
  Teaches prime-factor decomposition followed by bipartite matching/maximum flow between adjacent positions.
- [ ] **546E — Soldier and Traveling** · **2100** · [Problem](https://codeforces.com/problemset/problem/546/E)  
  Teaches modelling supplies, demands, and allowed one-edge moves as a flow network.
- [ ] **653D — Delivery Bears** · **2200** · [Problem](https://codeforces.com/problemset/problem/653/D)  
  Teaches binary search on the answer with max-flow feasibility checks.
- [ ] **821D — Okabe and City** · **2200** · [Problem](https://codeforces.com/problemset/problem/821/D)  
  Teaches compressing a sparse grid into a graph and using 0–1 shortest paths for paid row/column transitions.
- [ ] **877D — Olya and Energy Drinks** · **2100** · [Problem](https://codeforces.com/problemset/problem/877/D)  
  Teaches BFS with range transitions and data-structure optimisation to avoid repeatedly scanning the same cells.

---

## Completion log

| Problem | Date solved | Solved independently? | Key takeaway / mistake |
|---|---|---|---|
| Add rows as you solve | | | |

## Suggested GitHub setup

1. Create a repository, for example `codeforces-graph-roadmap`.
2. Upload this file as `README.md` (or rename it to `README.md` before uploading).
3. For **clickable checkboxes and a progress counter**, create a GitHub Issue named `30-problem graph practice` and paste the task-list sections from this file into the issue body. Checkboxes in issue task lists can be toggled directly; checkboxes in a repository README are read-only and must be changed by editing the file.
4. Keep solution code in folders such as `solutions/1433G/` and put your own observation/editorial notes in `notes/`.

**Progress rule:** mark a problem complete only when you can explain the main observation, justify the algorithm, and re-implement it without copying.
