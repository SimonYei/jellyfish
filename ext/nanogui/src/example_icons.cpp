/*
    src/example_icons.cpp -- C++ version of an example application that shows
    all available Entypo icons as they would appear in NanoGUI itself.  For a Python
    implementation, see '../python/example_icons.py'.

    NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/

/* Developer note: need to make a change to this file?
 * Please raise an Issue on GitHub describing what needs to change.  This file
 * was generated, so the scripts that generated it needs to update as well.
 */

#include <nanogui/nanogui.h>
using namespace nanogui;

// add a button to the wrapper with a fixed size
// `icon` should be the defined constant in nanogui/entypo.h
// the button label will be the string that represents this
#define ADD_BUTTON(icon)                                   \
    auto b_##icon = new Button(wrapper, #icon, icon);      \
    b_##icon->setIconPosition(Button::IconPosition::Left); \
    b_##icon->setFixedWidth(half_width);

int main(int /* argc */, char ** /* argv */) {
    nanogui::init();

    /* scoped variables */ {
        static constexpr int width      = 1000;
        static constexpr int half_width = width / 2;
        static constexpr int height     = 800;

        // create a fixed size screen with one window
        Screen *screen = new Screen({width, height}, "NanoGUI Icons", false);
        Window *window = new Window(screen, "All Icons");
        window->setPosition({0, 0});
        window->setFixedSize({width, height});

        // attach a vertical scroll panel
        auto vscroll = new VScrollPanel(window);
        vscroll->setFixedSize({width, height});

        // vscroll should only have *ONE* child. this is what `wrapper` is for
        auto wrapper = new Widget(vscroll);
        wrapper->setFixedSize({width, height});
        wrapper->setLayout(new GridLayout());// defaults: 2 columns

        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        ADD_BUTTON(ENTYPO_ICON_500PX)
        ADD_BUTTON(ENTYPO_ICON_500PX_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_ADD_TO_LIST)
        ADD_BUTTON(ENTYPO_ICON_ADD_USER)
        ADD_BUTTON(ENTYPO_ICON_ADDRESS)
        ADD_BUTTON(ENTYPO_ICON_ADJUST)
        ADD_BUTTON(ENTYPO_ICON_AIR)
        ADD_BUTTON(ENTYPO_ICON_AIRCRAFT)
        ADD_BUTTON(ENTYPO_ICON_AIRCRAFT_LANDING)
        ADD_BUTTON(ENTYPO_ICON_AIRCRAFT_TAKE_OFF)
        ADD_BUTTON(ENTYPO_ICON_ALIGN_BOTTOM)
        ADD_BUTTON(ENTYPO_ICON_ALIGN_HORIZONTAL_MIDDLE)
        ADD_BUTTON(ENTYPO_ICON_ALIGN_LEFT)
        ADD_BUTTON(ENTYPO_ICON_ALIGN_RIGHT)
        ADD_BUTTON(ENTYPO_ICON_ALIGN_TOP)
        ADD_BUTTON(ENTYPO_ICON_ALIGN_VERTICAL_MIDDLE)
        ADD_BUTTON(ENTYPO_ICON_APP_STORE)
        ADD_BUTTON(ENTYPO_ICON_ARCHIVE)
        ADD_BUTTON(ENTYPO_ICON_AREA_GRAPH)
        ADD_BUTTON(ENTYPO_ICON_ARROW_BOLD_DOWN)
        ADD_BUTTON(ENTYPO_ICON_ARROW_BOLD_LEFT)
        ADD_BUTTON(ENTYPO_ICON_ARROW_BOLD_RIGHT)
        ADD_BUTTON(ENTYPO_ICON_ARROW_BOLD_UP)
        ADD_BUTTON(ENTYPO_ICON_ARROW_DOWN)
        ADD_BUTTON(ENTYPO_ICON_ARROW_LEFT)
        ADD_BUTTON(ENTYPO_ICON_ARROW_LONG_DOWN)
        ADD_BUTTON(ENTYPO_ICON_ARROW_LONG_LEFT)
        ADD_BUTTON(ENTYPO_ICON_ARROW_LONG_RIGHT)
        ADD_BUTTON(ENTYPO_ICON_ARROW_LONG_UP)
        ADD_BUTTON(ENTYPO_ICON_ARROW_RIGHT)
        ADD_BUTTON(ENTYPO_ICON_ARROW_UP)
        ADD_BUTTON(ENTYPO_ICON_ARROW_WITH_CIRCLE_DOWN)
        ADD_BUTTON(ENTYPO_ICON_ARROW_WITH_CIRCLE_LEFT)
        ADD_BUTTON(ENTYPO_ICON_ARROW_WITH_CIRCLE_RIGHT)
        ADD_BUTTON(ENTYPO_ICON_ARROW_WITH_CIRCLE_UP)
        ADD_BUTTON(ENTYPO_ICON_ATTACHMENT)
        ADD_BUTTON(ENTYPO_ICON_AWARENESS_RIBBON)
        ADD_BUTTON(ENTYPO_ICON_BACK)
        ADD_BUTTON(ENTYPO_ICON_BACK_IN_TIME)
        ADD_BUTTON(ENTYPO_ICON_BAIDU)
        ADD_BUTTON(ENTYPO_ICON_BAR_GRAPH)
        ADD_BUTTON(ENTYPO_ICON_BASECAMP)
        ADD_BUTTON(ENTYPO_ICON_BATTERY)
        ADD_BUTTON(ENTYPO_ICON_BEAMED_NOTE)
        ADD_BUTTON(ENTYPO_ICON_BEHANCE)
        ADD_BUTTON(ENTYPO_ICON_BELL)
        ADD_BUTTON(ENTYPO_ICON_BLACKBOARD)
        ADD_BUTTON(ENTYPO_ICON_BLOCK)
        ADD_BUTTON(ENTYPO_ICON_BOOK)
        ADD_BUTTON(ENTYPO_ICON_BOOKMARK)
        ADD_BUTTON(ENTYPO_ICON_BOOKMARKS)
        ADD_BUTTON(ENTYPO_ICON_BOWL)
        ADD_BUTTON(ENTYPO_ICON_BOX)
        ADD_BUTTON(ENTYPO_ICON_BRIEFCASE)
        ADD_BUTTON(ENTYPO_ICON_BROWSER)
        ADD_BUTTON(ENTYPO_ICON_BRUSH)
        ADD_BUTTON(ENTYPO_ICON_BUCKET)
        ADD_BUTTON(ENTYPO_ICON_BUG)
        ADD_BUTTON(ENTYPO_ICON_CAKE)
        ADD_BUTTON(ENTYPO_ICON_CALCULATOR)
        ADD_BUTTON(ENTYPO_ICON_CALENDAR)
        ADD_BUTTON(ENTYPO_ICON_CAMERA)
        ADD_BUTTON(ENTYPO_ICON_CCW)
        ADD_BUTTON(ENTYPO_ICON_CHAT)
        ADD_BUTTON(ENTYPO_ICON_CHECK)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_DOWN)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_LEFT)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_RIGHT)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_SMALL_DOWN)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_SMALL_LEFT)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_SMALL_RIGHT)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_SMALL_UP)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_THIN_DOWN)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_THIN_LEFT)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_THIN_RIGHT)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_THIN_UP)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_UP)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_WITH_CIRCLE_DOWN)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_WITH_CIRCLE_LEFT)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_WITH_CIRCLE_RIGHT)
        ADD_BUTTON(ENTYPO_ICON_CHEVRON_WITH_CIRCLE_UP)
        ADD_BUTTON(ENTYPO_ICON_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_CIRCLE_WITH_CROSS)
        ADD_BUTTON(ENTYPO_ICON_CIRCLE_WITH_MINUS)
        ADD_BUTTON(ENTYPO_ICON_CIRCLE_WITH_PLUS)
        ADD_BUTTON(ENTYPO_ICON_CIRCULAR_GRAPH)
        ADD_BUTTON(ENTYPO_ICON_CLAPPERBOARD)
        ADD_BUTTON(ENTYPO_ICON_CLASSIC_COMPUTER)
        ADD_BUTTON(ENTYPO_ICON_CLIPBOARD)
        ADD_BUTTON(ENTYPO_ICON_CLOCK)
        ADD_BUTTON(ENTYPO_ICON_CLOUD)
        ADD_BUTTON(ENTYPO_ICON_CODE)
        ADD_BUTTON(ENTYPO_ICON_COG)
        ADD_BUTTON(ENTYPO_ICON_COLOURS)
        ADD_BUTTON(ENTYPO_ICON_COMPASS)
        ADD_BUTTON(ENTYPO_ICON_CONTROLLER_FAST_BACKWARD)
        ADD_BUTTON(ENTYPO_ICON_CONTROLLER_FAST_FORWARD)
        ADD_BUTTON(ENTYPO_ICON_CONTROLLER_JUMP_TO_START)
        ADD_BUTTON(ENTYPO_ICON_CONTROLLER_NEXT)
        ADD_BUTTON(ENTYPO_ICON_CONTROLLER_PAUS)
        ADD_BUTTON(ENTYPO_ICON_CONTROLLER_PLAY)
        ADD_BUTTON(ENTYPO_ICON_CONTROLLER_RECORD)
        ADD_BUTTON(ENTYPO_ICON_CONTROLLER_STOP)
        ADD_BUTTON(ENTYPO_ICON_CONTROLLER_VOLUME)
        ADD_BUTTON(ENTYPO_ICON_COPY)
        ADD_BUTTON(ENTYPO_ICON_CREATIVE_CLOUD)
        ADD_BUTTON(ENTYPO_ICON_CREATIVE_COMMONS)
        ADD_BUTTON(ENTYPO_ICON_CREATIVE_COMMONS_ATTRIBUTION)
        ADD_BUTTON(ENTYPO_ICON_CREATIVE_COMMONS_NODERIVS)
        ADD_BUTTON(ENTYPO_ICON_CREATIVE_COMMONS_NONCOMMERCIAL_EU)
        ADD_BUTTON(ENTYPO_ICON_CREATIVE_COMMONS_NONCOMMERCIAL_US)
        ADD_BUTTON(ENTYPO_ICON_CREATIVE_COMMONS_PUBLIC_DOMAIN)
        ADD_BUTTON(ENTYPO_ICON_CREATIVE_COMMONS_REMIX)
        ADD_BUTTON(ENTYPO_ICON_CREATIVE_COMMONS_SHARE)
        ADD_BUTTON(ENTYPO_ICON_CREATIVE_COMMONS_SHAREALIKE)
        ADD_BUTTON(ENTYPO_ICON_CREDIT)
        ADD_BUTTON(ENTYPO_ICON_CREDIT_CARD)
        ADD_BUTTON(ENTYPO_ICON_CROP)
        ADD_BUTTON(ENTYPO_ICON_CROSS)
        ADD_BUTTON(ENTYPO_ICON_CUP)
        ADD_BUTTON(ENTYPO_ICON_CW)
        ADD_BUTTON(ENTYPO_ICON_CYCLE)
        ADD_BUTTON(ENTYPO_ICON_DATABASE)
        ADD_BUTTON(ENTYPO_ICON_DIAL_PAD)
        ADD_BUTTON(ENTYPO_ICON_DIRECTION)
        ADD_BUTTON(ENTYPO_ICON_DOCUMENT)
        ADD_BUTTON(ENTYPO_ICON_DOCUMENT_LANDSCAPE)
        ADD_BUTTON(ENTYPO_ICON_DOCUMENTS)
        ADD_BUTTON(ENTYPO_ICON_DOT_SINGLE)
        ADD_BUTTON(ENTYPO_ICON_DOTS_THREE_HORIZONTAL)
        ADD_BUTTON(ENTYPO_ICON_DOTS_THREE_VERTICAL)
        ADD_BUTTON(ENTYPO_ICON_DOTS_TWO_HORIZONTAL)
        ADD_BUTTON(ENTYPO_ICON_DOTS_TWO_VERTICAL)
        ADD_BUTTON(ENTYPO_ICON_DOWNLOAD)
        ADD_BUTTON(ENTYPO_ICON_DRIBBBLE)
        ADD_BUTTON(ENTYPO_ICON_DRIBBBLE_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_DRINK)
        ADD_BUTTON(ENTYPO_ICON_DRIVE)
        ADD_BUTTON(ENTYPO_ICON_DROP)
        ADD_BUTTON(ENTYPO_ICON_DROPBOX)
        ADD_BUTTON(ENTYPO_ICON_EDIT)
        ADD_BUTTON(ENTYPO_ICON_EMAIL)
        ADD_BUTTON(ENTYPO_ICON_EMOJI_FLIRT)
        ADD_BUTTON(ENTYPO_ICON_EMOJI_HAPPY)
        ADD_BUTTON(ENTYPO_ICON_EMOJI_NEUTRAL)
        ADD_BUTTON(ENTYPO_ICON_EMOJI_SAD)
        ADD_BUTTON(ENTYPO_ICON_ERASE)
        ADD_BUTTON(ENTYPO_ICON_ERASER)
        ADD_BUTTON(ENTYPO_ICON_EVERNOTE)
        ADD_BUTTON(ENTYPO_ICON_EXPORT)
        ADD_BUTTON(ENTYPO_ICON_EYE)
        ADD_BUTTON(ENTYPO_ICON_EYE_WITH_LINE)
        ADD_BUTTON(ENTYPO_ICON_FACEBOOK)
        ADD_BUTTON(ENTYPO_ICON_FACEBOOK_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_FEATHER)
        ADD_BUTTON(ENTYPO_ICON_FINGERPRINT)
        ADD_BUTTON(ENTYPO_ICON_FLAG)
        ADD_BUTTON(ENTYPO_ICON_FLASH)
        ADD_BUTTON(ENTYPO_ICON_FLASHLIGHT)
        ADD_BUTTON(ENTYPO_ICON_FLAT_BRUSH)
        ADD_BUTTON(ENTYPO_ICON_FLATTR)
        ADD_BUTTON(ENTYPO_ICON_FLICKR)
        ADD_BUTTON(ENTYPO_ICON_FLICKR_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_FLOW_BRANCH)
        ADD_BUTTON(ENTYPO_ICON_FLOW_CASCADE)
        ADD_BUTTON(ENTYPO_ICON_FLOW_LINE)
        ADD_BUTTON(ENTYPO_ICON_FLOW_PARALLEL)
        ADD_BUTTON(ENTYPO_ICON_FLOW_TREE)
        ADD_BUTTON(ENTYPO_ICON_FLOWER)
        ADD_BUTTON(ENTYPO_ICON_FOLDER)
        ADD_BUTTON(ENTYPO_ICON_FOLDER_IMAGES)
        ADD_BUTTON(ENTYPO_ICON_FOLDER_MUSIC)
        ADD_BUTTON(ENTYPO_ICON_FOLDER_VIDEO)
        ADD_BUTTON(ENTYPO_ICON_FORWARD)
        ADD_BUTTON(ENTYPO_ICON_FOURSQUARE)
        ADD_BUTTON(ENTYPO_ICON_FUNNEL)
        ADD_BUTTON(ENTYPO_ICON_GAME_CONTROLLER)
        ADD_BUTTON(ENTYPO_ICON_GAUGE)
        ADD_BUTTON(ENTYPO_ICON_GITHUB)
        ADD_BUTTON(ENTYPO_ICON_GITHUB_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_GLOBE)
        ADD_BUTTON(ENTYPO_ICON_GOOGLE_DRIVE)
        ADD_BUTTON(ENTYPO_ICON_GOOGLE_HANGOUTS)
        ADD_BUTTON(ENTYPO_ICON_GOOGLE_PLAY)
        ADD_BUTTON(ENTYPO_ICON_GOOGLE_PLUS)
        ADD_BUTTON(ENTYPO_ICON_GOOGLE_PLUS_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_GRADUATION_CAP)
        ADD_BUTTON(ENTYPO_ICON_GRID)
        ADD_BUTTON(ENTYPO_ICON_GROOVESHARK)
        ADD_BUTTON(ENTYPO_ICON_HAIR_CROSS)
        ADD_BUTTON(ENTYPO_ICON_HAND)
        ADD_BUTTON(ENTYPO_ICON_HEART)
        ADD_BUTTON(ENTYPO_ICON_HEART_OUTLINED)
        ADD_BUTTON(ENTYPO_ICON_HELP)
        ADD_BUTTON(ENTYPO_ICON_HELP_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_HOME)
        ADD_BUTTON(ENTYPO_ICON_HOUR_GLASS)
        ADD_BUTTON(ENTYPO_ICON_HOUZZ)
        ADD_BUTTON(ENTYPO_ICON_ICLOUD)
        ADD_BUTTON(ENTYPO_ICON_IMAGE)
        ADD_BUTTON(ENTYPO_ICON_IMAGE_INVERTED)
        ADD_BUTTON(ENTYPO_ICON_IMAGES)
        ADD_BUTTON(ENTYPO_ICON_INBOX)
        ADD_BUTTON(ENTYPO_ICON_INFINITY)
        ADD_BUTTON(ENTYPO_ICON_INFO)
        ADD_BUTTON(ENTYPO_ICON_INFO_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_INSTAGRAM)
        ADD_BUTTON(ENTYPO_ICON_INSTAGRAM_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_INSTALL)
        ADD_BUTTON(ENTYPO_ICON_KEY)
        ADD_BUTTON(ENTYPO_ICON_KEYBOARD)
        ADD_BUTTON(ENTYPO_ICON_LAB_FLASK)
        ADD_BUTTON(ENTYPO_ICON_LANDLINE)
        ADD_BUTTON(ENTYPO_ICON_LANGUAGE)
        ADD_BUTTON(ENTYPO_ICON_LAPTOP)
        ADD_BUTTON(ENTYPO_ICON_LASTFM)
        ADD_BUTTON(ENTYPO_ICON_LASTFM_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_LAYERS)
        ADD_BUTTON(ENTYPO_ICON_LEAF)
        ADD_BUTTON(ENTYPO_ICON_LEVEL_DOWN)
        ADD_BUTTON(ENTYPO_ICON_LEVEL_UP)
        ADD_BUTTON(ENTYPO_ICON_LIFEBUOY)
        ADD_BUTTON(ENTYPO_ICON_LIGHT_BULB)
        ADD_BUTTON(ENTYPO_ICON_LIGHT_DOWN)
        ADD_BUTTON(ENTYPO_ICON_LIGHT_UP)
        ADD_BUTTON(ENTYPO_ICON_LINE_GRAPH)
        ADD_BUTTON(ENTYPO_ICON_LINK)
        ADD_BUTTON(ENTYPO_ICON_LINKEDIN)
        ADD_BUTTON(ENTYPO_ICON_LINKEDIN_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_LIST)
        ADD_BUTTON(ENTYPO_ICON_LOCATION)
        ADD_BUTTON(ENTYPO_ICON_LOCATION_PIN)
        ADD_BUTTON(ENTYPO_ICON_LOCK)
        ADD_BUTTON(ENTYPO_ICON_LOCK_OPEN)
        ADD_BUTTON(ENTYPO_ICON_LOG_OUT)
        ADD_BUTTON(ENTYPO_ICON_LOGIN)
        ADD_BUTTON(ENTYPO_ICON_LOOP)
        ADD_BUTTON(ENTYPO_ICON_MAGNET)
        ADD_BUTTON(ENTYPO_ICON_MAGNIFYING_GLASS)
        ADD_BUTTON(ENTYPO_ICON_MAIL)
        ADD_BUTTON(ENTYPO_ICON_MAIL_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_MAN)
        ADD_BUTTON(ENTYPO_ICON_MAP)
        ADD_BUTTON(ENTYPO_ICON_MASK)
        ADD_BUTTON(ENTYPO_ICON_MEDAL)
        ADD_BUTTON(ENTYPO_ICON_MEDIUM)
        ADD_BUTTON(ENTYPO_ICON_MEDIUM_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_MEGAPHONE)
        ADD_BUTTON(ENTYPO_ICON_MENU)
        ADD_BUTTON(ENTYPO_ICON_MERGE)
        ADD_BUTTON(ENTYPO_ICON_MESSAGE)
        ADD_BUTTON(ENTYPO_ICON_MIC)
        ADD_BUTTON(ENTYPO_ICON_MINUS)
        ADD_BUTTON(ENTYPO_ICON_MIXI)
        ADD_BUTTON(ENTYPO_ICON_MOBILE)
        ADD_BUTTON(ENTYPO_ICON_MODERN_MIC)
        ADD_BUTTON(ENTYPO_ICON_MOON)
        ADD_BUTTON(ENTYPO_ICON_MOUSE)
        ADD_BUTTON(ENTYPO_ICON_MOUSE_POINTER)
        ADD_BUTTON(ENTYPO_ICON_MUSIC)
        ADD_BUTTON(ENTYPO_ICON_NETWORK)
        ADD_BUTTON(ENTYPO_ICON_NEW)
        ADD_BUTTON(ENTYPO_ICON_NEW_MESSAGE)
        ADD_BUTTON(ENTYPO_ICON_NEWS)
        ADD_BUTTON(ENTYPO_ICON_NEWSLETTER)
        ADD_BUTTON(ENTYPO_ICON_NOTE)
        ADD_BUTTON(ENTYPO_ICON_NOTIFICATION)
        ADD_BUTTON(ENTYPO_ICON_NOTIFICATIONS_OFF)
        ADD_BUTTON(ENTYPO_ICON_OLD_MOBILE)
        ADD_BUTTON(ENTYPO_ICON_OLD_PHONE)
        ADD_BUTTON(ENTYPO_ICON_ONEDRIVE)
        ADD_BUTTON(ENTYPO_ICON_OPEN_BOOK)
        ADD_BUTTON(ENTYPO_ICON_PALETTE)
        ADD_BUTTON(ENTYPO_ICON_PAPER_PLANE)
        ADD_BUTTON(ENTYPO_ICON_PAYPAL)
        ADD_BUTTON(ENTYPO_ICON_PENCIL)
        ADD_BUTTON(ENTYPO_ICON_PHONE)
        ADD_BUTTON(ENTYPO_ICON_PICASA)
        ADD_BUTTON(ENTYPO_ICON_PIE_CHART)
        ADD_BUTTON(ENTYPO_ICON_PIN)
        ADD_BUTTON(ENTYPO_ICON_PINTEREST)
        ADD_BUTTON(ENTYPO_ICON_PINTEREST_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_PLUS)
        ADD_BUTTON(ENTYPO_ICON_POPUP)
        ADD_BUTTON(ENTYPO_ICON_POWER_PLUG)
        ADD_BUTTON(ENTYPO_ICON_PRICE_RIBBON)
        ADD_BUTTON(ENTYPO_ICON_PRICE_TAG)
        ADD_BUTTON(ENTYPO_ICON_PRINT)
        ADD_BUTTON(ENTYPO_ICON_PROGRESS_EMPTY)
        ADD_BUTTON(ENTYPO_ICON_PROGRESS_FULL)
        ADD_BUTTON(ENTYPO_ICON_PROGRESS_ONE)
        ADD_BUTTON(ENTYPO_ICON_PROGRESS_TWO)
        ADD_BUTTON(ENTYPO_ICON_PUBLISH)
        ADD_BUTTON(ENTYPO_ICON_QQ)
        ADD_BUTTON(ENTYPO_ICON_QQ_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_QUOTE)
        ADD_BUTTON(ENTYPO_ICON_RADIO)
        ADD_BUTTON(ENTYPO_ICON_RAFT)
        ADD_BUTTON(ENTYPO_ICON_RAFT_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_RAINBOW)
        ADD_BUTTON(ENTYPO_ICON_RDIO)
        ADD_BUTTON(ENTYPO_ICON_RDIO_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_REMOVE_USER)
        ADD_BUTTON(ENTYPO_ICON_RENREN)
        ADD_BUTTON(ENTYPO_ICON_REPLY)
        ADD_BUTTON(ENTYPO_ICON_REPLY_ALL)
        ADD_BUTTON(ENTYPO_ICON_RESIZE_100_PERCENT)
        ADD_BUTTON(ENTYPO_ICON_RESIZE_FULL_SCREEN)
        ADD_BUTTON(ENTYPO_ICON_RETWEET)
        ADD_BUTTON(ENTYPO_ICON_ROCKET)
        ADD_BUTTON(ENTYPO_ICON_ROUND_BRUSH)
        ADD_BUTTON(ENTYPO_ICON_RSS)
        ADD_BUTTON(ENTYPO_ICON_RULER)
        ADD_BUTTON(ENTYPO_ICON_SAVE)
        ADD_BUTTON(ENTYPO_ICON_SCISSORS)
        ADD_BUTTON(ENTYPO_ICON_SCRIBD)
        ADD_BUTTON(ENTYPO_ICON_SELECT_ARROWS)
        ADD_BUTTON(ENTYPO_ICON_SHARE)
        ADD_BUTTON(ENTYPO_ICON_SHARE_ALTERNATIVE)
        ADD_BUTTON(ENTYPO_ICON_SHAREABLE)
        ADD_BUTTON(ENTYPO_ICON_SHIELD)
        ADD_BUTTON(ENTYPO_ICON_SHOP)
        ADD_BUTTON(ENTYPO_ICON_SHOPPING_BAG)
        ADD_BUTTON(ENTYPO_ICON_SHOPPING_BASKET)
        ADD_BUTTON(ENTYPO_ICON_SHOPPING_CART)
        ADD_BUTTON(ENTYPO_ICON_SHUFFLE)
        ADD_BUTTON(ENTYPO_ICON_SIGNAL)
        ADD_BUTTON(ENTYPO_ICON_SINA_WEIBO)
        ADD_BUTTON(ENTYPO_ICON_SKYPE)
        ADD_BUTTON(ENTYPO_ICON_SKYPE_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_SLIDESHARE)
        ADD_BUTTON(ENTYPO_ICON_SMASHING)
        ADD_BUTTON(ENTYPO_ICON_SOUND)
        ADD_BUTTON(ENTYPO_ICON_SOUND_MIX)
        ADD_BUTTON(ENTYPO_ICON_SOUND_MUTE)
        ADD_BUTTON(ENTYPO_ICON_SOUNDCLOUD)
        ADD_BUTTON(ENTYPO_ICON_SPORTS_CLUB)
        ADD_BUTTON(ENTYPO_ICON_SPOTIFY)
        ADD_BUTTON(ENTYPO_ICON_SPOTIFY_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_SPREADSHEET)
        ADD_BUTTON(ENTYPO_ICON_SQUARED_CROSS)
        ADD_BUTTON(ENTYPO_ICON_SQUARED_MINUS)
        ADD_BUTTON(ENTYPO_ICON_SQUARED_PLUS)
        ADD_BUTTON(ENTYPO_ICON_STAR)
        ADD_BUTTON(ENTYPO_ICON_STAR_OUTLINED)
        ADD_BUTTON(ENTYPO_ICON_STOPWATCH)
        ADD_BUTTON(ENTYPO_ICON_STUMBLEUPON)
        ADD_BUTTON(ENTYPO_ICON_STUMBLEUPON_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_SUITCASE)
        ADD_BUTTON(ENTYPO_ICON_SWAP)
        ADD_BUTTON(ENTYPO_ICON_SWARM)
        ADD_BUTTON(ENTYPO_ICON_SWEDEN)
        ADD_BUTTON(ENTYPO_ICON_SWITCH)
        ADD_BUTTON(ENTYPO_ICON_TABLET)
        ADD_BUTTON(ENTYPO_ICON_TABLET_MOBILE_COMBO)
        ADD_BUTTON(ENTYPO_ICON_TAG)
        ADD_BUTTON(ENTYPO_ICON_TEXT)
        ADD_BUTTON(ENTYPO_ICON_TEXT_DOCUMENT)
        ADD_BUTTON(ENTYPO_ICON_TEXT_DOCUMENT_INVERTED)
        ADD_BUTTON(ENTYPO_ICON_THERMOMETER)
        ADD_BUTTON(ENTYPO_ICON_THUMBS_DOWN)
        ADD_BUTTON(ENTYPO_ICON_THUMBS_UP)
        ADD_BUTTON(ENTYPO_ICON_THUNDER_CLOUD)
        ADD_BUTTON(ENTYPO_ICON_TICKET)
        ADD_BUTTON(ENTYPO_ICON_TIME_SLOT)
        ADD_BUTTON(ENTYPO_ICON_TOOLS)
        ADD_BUTTON(ENTYPO_ICON_TRAFFIC_CONE)
        ADD_BUTTON(ENTYPO_ICON_TRASH)
        ADD_BUTTON(ENTYPO_ICON_TREE)
        ADD_BUTTON(ENTYPO_ICON_TRIANGLE_DOWN)
        ADD_BUTTON(ENTYPO_ICON_TRIANGLE_LEFT)
        ADD_BUTTON(ENTYPO_ICON_TRIANGLE_RIGHT)
        ADD_BUTTON(ENTYPO_ICON_TRIANGLE_UP)
        ADD_BUTTON(ENTYPO_ICON_TRIPADVISOR)
        ADD_BUTTON(ENTYPO_ICON_TROPHY)
        ADD_BUTTON(ENTYPO_ICON_TUMBLR)
        ADD_BUTTON(ENTYPO_ICON_TUMBLR_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_TV)
        ADD_BUTTON(ENTYPO_ICON_TWITTER)
        ADD_BUTTON(ENTYPO_ICON_TWITTER_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_TYPING)
        ADD_BUTTON(ENTYPO_ICON_UNINSTALL)
        ADD_BUTTON(ENTYPO_ICON_UNREAD)
        ADD_BUTTON(ENTYPO_ICON_UNTAG)
        ADD_BUTTON(ENTYPO_ICON_UPLOAD)
        ADD_BUTTON(ENTYPO_ICON_UPLOAD_TO_CLOUD)
        ADD_BUTTON(ENTYPO_ICON_USER)
        ADD_BUTTON(ENTYPO_ICON_USERS)
        ADD_BUTTON(ENTYPO_ICON_V_CARD)
        ADD_BUTTON(ENTYPO_ICON_VIDEO)
        ADD_BUTTON(ENTYPO_ICON_VIDEO_CAMERA)
        ADD_BUTTON(ENTYPO_ICON_VIMEO)
        ADD_BUTTON(ENTYPO_ICON_VIMEO_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_VINE)
        ADD_BUTTON(ENTYPO_ICON_VINE_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_VINYL)
        ADD_BUTTON(ENTYPO_ICON_VK)
        ADD_BUTTON(ENTYPO_ICON_VK_ALTERNITIVE)
        ADD_BUTTON(ENTYPO_ICON_VK_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_VOICEMAIL)
        ADD_BUTTON(ENTYPO_ICON_WALLET)
        ADD_BUTTON(ENTYPO_ICON_WARNING)
        ADD_BUTTON(ENTYPO_ICON_WATER)
        ADD_BUTTON(ENTYPO_ICON_WINDOWS_STORE)
        ADD_BUTTON(ENTYPO_ICON_XING)
        ADD_BUTTON(ENTYPO_ICON_XING_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_YELP)
        ADD_BUTTON(ENTYPO_ICON_YOUKO)
        ADD_BUTTON(ENTYPO_ICON_YOUKO_WITH_CIRCLE)
        ADD_BUTTON(ENTYPO_ICON_YOUTUBE)
        ADD_BUTTON(ENTYPO_ICON_YOUTUBE_WITH_CIRCLE)
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////

        screen->performLayout();
        screen->setVisible(true);

        nanogui::mainloop();
    }

    nanogui::shutdown();
    return 0;
}
