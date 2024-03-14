/*
** EPITECH PROJECT, 2023
** B-MUL-200-MAR-2-1-mypaint-selim.bouasker
** File description:
** main.c
*/

#include "../include/my.h"

void close_it(global_t *all)
{
    if (EVENT.type == sfEvtClosed) {
        sfRenderWindow_close(WINDOW);
    }
}

static void draw_ui(global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMAGE[0].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMAGE[1].sprite, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[0].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[1].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[2].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[3].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[4].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[5].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[6].rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[14].rect, NULL);
    sfRenderWindow_drawText(WINDOW, IMAGE[14].text, NULL);
    sfRenderWindow_drawText(WINDOW, IMAGE[15].text, NULL);
    sfRenderWindow_drawText(WINDOW, IMAGE[16].text, NULL);
    sfRenderWindow_drawText(WINDOW, IMAGE[17].text, NULL);
}

static void open_section(global_t *all)
{
    if (all->clicked_file == true) {
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[7].rect, NULL);
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[8].rect, NULL);
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[9].rect, NULL);
        sfRenderWindow_drawText(WINDOW, IMAGE[18].text, NULL);
        sfRenderWindow_drawText(WINDOW, IMAGE[19].text, NULL);
        sfRenderWindow_drawText(WINDOW, IMAGE[20].text, NULL);
    } else {
        sfRectangleShape_destroy(BUTTON[7].rect);
        sfRectangleShape_destroy(BUTTON[8].rect);
        sfRectangleShape_destroy(BUTTON[9].rect);
    }
    if (all->clicked_edit == true) {
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[10].rect, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[2].sprite, NULL);
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[11].rect, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMAGE[3].sprite, NULL);
    } else {
        sfRectangleShape_destroy(BUTTON[10].rect);
        sfRectangleShape_destroy(BUTTON[11].rect);
    }
    if (all->clicked_help == true) {
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[12].rect, NULL);
        sfRenderWindow_drawRectangleShape(WINDOW, BUTTON[13].rect, NULL);
        sfRenderWindow_drawText(WINDOW, IMAGE[21].text, NULL);
    } else {
        sfRectangleShape_destroy(BUTTON[12].rect);
        sfRectangleShape_destroy(BUTTON[13].rect);
    }
}

static void clickable_section(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= BUTTON[7].pos.x && mouse.x <= BUTTON[7].pos.x + 120 &&
    mouse.y >= BUTTON[7].pos.y && mouse.y <= BUTTON[7].pos.y + 60 &&
    all->clicked_file == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clear_canvas(all);
        }
    }
    if (mouse.x >= BUTTON[8].pos.x && mouse.x <= BUTTON[8].pos.x + 120 &&
    mouse.y >= BUTTON[8].pos.y && mouse.y <= BUTTON[8].pos.y + 60 &&
    all->clicked_file == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            save_canvas(all);
        }
    }
    if (mouse.x >= BUTTON[10].pos.x && mouse.x <= BUTTON[10].pos.x + 120 &&
    mouse.y >= BUTTON[10].pos.y && mouse.y <= BUTTON[10].pos.y + 60 &&
    all->clicked_file == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            printf("open file\n");
        }
    }
    if (mouse.x >= BUTTON[10].pos.x && mouse.x <= BUTTON[10].pos.x + 120 &&
    mouse.y >= BUTTON[10].pos.y && mouse.y <= BUTTON[10].pos.y + 60 &&
    all->clicked_edit == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->pen_selected = true;
        }
    }
    if (mouse.x >= BUTTON[11].pos.x && mouse.x <= BUTTON[11].pos.x + 120 &&
    mouse.y >= BUTTON[11].pos.y && mouse.y <= BUTTON[11].pos.y + 60 &&
    all->clicked_edit == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->pen_selected = false;
        }
    }
    if (mouse.x >= BUTTON[12].pos.x && mouse.x <= BUTTON[12].pos.x + 120 &&
    mouse.y >= BUTTON[12].pos.y && mouse.y <= BUTTON[12].pos.y + 60 &&
    all->clicked_help == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            system("zenity --info --text='Login: Rares'");
        }
    }
    if (mouse.x >= BUTTON[13].pos.x && mouse.x <= BUTTON[13].pos.x + 120 &&
    mouse.y >= BUTTON[13].pos.y && mouse.y <= BUTTON[13].pos.y + 60 &&
    all->clicked_help == true) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            system("zenity --info --text='File section: clear, save, open\nEdit section: pen, eraser\n Help section: login, software help'");
        }
    }
}

void all_actions(global_t *all)
{
    draw_ui(all);
    change_color(all);
    exit_button(all);
    if (all->pen_selected == true) {
        draw_it(all);
        show_it(all);
    } else {
        erease_it(all);
        show_it(all);
    }
    open_section(all);
    clickable_section(all);
}

void main_menu(global_t *all)
{
    all->clicked_file = false;
    all->clicked_edit = false;
    all->clicked_help = false;
    all->pen_selected = true;
    while (sfRenderWindow_isOpen(WINDOW)) {
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            close_it(all);
            verify_click(all);
        }
        sfRenderWindow_clear(WINDOW, sfWhite);
        hover(all);
        all_actions(all);
        sfRenderWindow_display(WINDOW);
    }
}

void verify_click(global_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.x >= BUTTON[3].pos.x && mouse.x <= BUTTON[3].pos.x + 120 &&
        mouse.y >= BUTTON[3].pos.y && mouse.y <= BUTTON[3].pos.y + 60) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->clicked_file = !all->clicked_file;
            all->clicked_edit = false;
            all->clicked_help = false;
        }
    }
    if (mouse.x >= BUTTON[4].pos.x && mouse.x <= BUTTON[4].pos.x + 120 &&
        mouse.y >= BUTTON[4].pos.y && mouse.y <= BUTTON[4].pos.y + 60) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->clicked_edit = !all->clicked_edit;
            all->clicked_file = false;
            all->clicked_help = false;
        }
    }
    if (mouse.x >= BUTTON[5].pos.x && mouse.x <= BUTTON[5].pos.x + 120 &&
        mouse.y >= BUTTON[5].pos.y && mouse.y <= BUTTON[5].pos.y + 60) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            all->clicked_help = !all->clicked_help;
            all->clicked_edit = false;
            all->clicked_file = false;
        }
    }
}

int main(int argc, char **argv)
{
    global_t all;

    if (argc != 1) {
        write(2, "Error in number of args\n", 25);
        return 84;
    } else {
        init(&all);
        main_menu(&all);
        return 0;
    }
}
