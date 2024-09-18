#ifndef JELLY_SOLVER_HPP
#define JELLY_SOLVER_HPP

#include <algorithm>
#include <vector>

//某操作是普通操作，熵变操作，非法操作
enum MoveType {
    NORMAL = 0,
    STATE_CHANGED = 2,
    INVALID = 1
};
enum MoveDirect {
    LEFT = 0,
    RIGHT = 1
};

using Pos = std::pair<int, int>;
using std::vector;

class GameState {
private:
    //TODO @Maiji 在这里补充一局游戏的每个状态需要记录的信息。
    //记录每个果冻的每个单元的坐标
    vector<vector<Pos>> jellies;

public:

};

class JellySolver {
private:
    //TODO @Maiji 在这里补充一局游戏的常亮信息，搜索求解过程中这些信息不会发生变化。
    const vector<Pos> walls;
    const GameState init_state;

    //TODO @Maiji 检查某局面是否为终止局面
    bool is_finished(const GameState &state) const {
        return true;
    }

    //TODO @Maiji 执行某移动，返回该移动类型及移动后状态
    std::pair<MoveType, GameState> move(int block, int direct = LEFT) {

    }

public:
    // 使用游戏的初始信息构造一个solver
    JellySolver(const GameState &init_state, const vector<Pos> &walls) : init_state(init_state), walls(walls) {}


    // TODO @LLouver 求解游戏
    void solve() {

    }

    // TODO @LLouver 输出求解结果
    void print() {

    }
};

#endif //JELLY_SOLVER_HPP
