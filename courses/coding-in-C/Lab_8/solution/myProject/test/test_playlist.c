#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "../include/playlist.h"

/* === Unit-tests === */

// example unit test
void test_init_playlist(void)
{
    Playlist p;
    init_playlist(&p);

    assert(p.phead == NULL);
    assert(p.countSongs == 0);
}

/* === Test-Runner === */

int main(void)
{
    //test_init_playlist();
    void test_init_playlist(void)
{
    Playlist p;
    init_playlist(&p);

    assert(p.phead == NULL);
    assert(p.countSongs == 0);
}

    // test_add_song();
    void test_add_song(void)
    {
        Playlist p;
        add_song(&p);

        assert(p.pnext == NULL);
        assert(p.phead == newSong);
    }

    // test_delete_firstSong();
    void test_delete_firstSong()
    {
        Playlist p;
        delete_firstSong(&p);

        assert(p.temp == phead);
        assert(p.phead == pnext);
    }

    // test_delete_firstSong_empty(); // what happens if we delete first song from empty playlist
    void test_delete_firstSong()
    {
        Playlist p;
        delete_firstSong(&p);

        assert(p.head == NULL);
    }
    
    
    // test_delete_playlist();
    void test_delete_playlist()
    {
         Playlist p;
        delete_playlist(&p);

        assert(p.phead != NULL);


    }


    // test_max_songs_limit(); // verify if the limit will be not be surpassed

    printf("Alle Playlist-Tests erfolgreich bestanden.\n");
    return 0;
}
