#ifndef _SCORE_COUNTER_H_
#define _SCORE_COUNTER_H_
#include "entity.h"
#include "SDL/SDL.h"
#include "SDL/SDL_ttf.h"
#include <string>

using std::string;

namespace breakout {
    class ScoreCounter : public Entity {
    private:
        TTF_Font *font;
        SDL_Color text_color;
        int score;
        int x, y;
    public:
        ScoreCounter(int initial, string font_name, int font_size,
                     SDL_Color color);
        ~ScoreCounter();
        void set_score(int n);
        int get_score();
        void add_score(int n);
        void step();
        void render(SDL_Surface *screen);
        bool is_dead();
    };
}

#endif

// Local Variables:
// mode: c++
// End:
