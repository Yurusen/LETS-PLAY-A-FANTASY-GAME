#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool startPart1 = true;
bool playPart2 = false;
bool playPart3 = false;
bool playPart4 = false;
bool playPart5 = false;
bool playAgain = true;

class Part1;
class Part2;
class Part3;

// Character Class

class Character {
public:
    Character(const string& name) : name(name) {}
    virtual void introduce() = 0;
    virtual bool interact() = 0;

protected:
    string name;
};

const string OWL_NAME = "Nocturna";
const string DRAGON_NAME = "Inferix";
const string SACRED_TREE_NAME = "Eldertwine";
const string NIGHTMARES_EMBRACE_NAME = "Desovortex";

class Owl : public Character {
public:
    Owl(const string& name) : Character(name) {}
    void introduce() override {
        cout << "\"I am the wise sentinel of the night, guardian of ancient secrets, and messenger of destiny - I am the Owl of the Obscure, " << name << ".\"\n";
    }
    bool interact() override {
        cout << name << ": \"Who are you, traveler of the night? What brings you to our realm?\"\n";
        return true;
    }
};

class Dragon : public Character {
public:
    Dragon(const string& name) : Character(name) {}
    void introduce() override {
        cout << "\"I am the fiery embodiment of power and legend, a force of nature itself - I am the Dragon of the Dawn, " << name << ".\"\n";
    }
    bool interact() override {
        cout << name << ": \"Venture forth, for destiny awaits, and I am the crucible that forges heroes.\"\n";
        return true;
    }
};

class SacredTree : public Character {
public:
  SacredTree(const string& name) : Character(name) {}
  void introduce() override {
    cout << "\"Rooted in time, keeper of enigmatic wisdom, and witness to the unfolding destinies, I am the Sacred Sentinal of Secrets, " << name << ".\"\n";
  }
  bool interact() override {
    cout << name << ": \"In the heart of my sanctuary, the answers to your deepest questions lie. Are you prepared to unveil your destiny?\"\n";
    return true;
  }
};

class NightmaresEmbrace : public Character {
public:
  NightmaresEmbrace(const string& name) : Character(name) {}
  void introduce() override {
    cout << "\"I am the shrouded enigma, the personification of fear and the unknown, I am the Nightmares Embrace, " << name << "\"\n";
  }
  bool interact() override {
    cout << name << ": \"Confront your inner darkness or be forever ensnared in this cursed realm - the choice is yours.\"\n";
    return true;
  }
};

// Functions

bool restartGame() {
    char playAgain;
    cout << "Would you like to start over? (Y/N) : \n\n";
    cin >> playAgain;
    if (toupper(playAgain) == 'Y') {
      startPart1 = true;
      playPart2 = false;
      playPart3 = false;
      return true;
    }
    else {
        cout << "\nFare thee well, valiant traveler of the mystical realm! Thank you for partaking in this fantastical adventure!\n";
        return false;
    }
};

bool play() {
    char playGame;
    cout << "Would you like to embark on your quest? (Y/N) : \n\n";
    cin >> playGame;
    if (toupper(playGame) == 'Y') {
        startPart1 = true;
        playPart2 = false;
        playPart3 = false;
    }
    else {
        cout << "\nFare thee well, valiant traveler of the mystical realm! Thank you for partaking in this fantastical adventure!\n";
        return false;
    }
};

char getPlayerChoice() {
    char choice;
    cout << "\n\nEnter your choice: ";
    cin >> choice;
    return toupper(choice);    
}

// Story Elements

void titleSynopsis() {
    // Titles
    cout << "\nRealm of Arcane Trials: The Enigma Unveiled!\n\n";
    cout << "Greetings, intrepid soul. Do you dare to embark on a captivating odyssey, where the quest for your deepest truths awaits?\n\n";

    // Synopsis
    cout << "In the mystical land of enchantments, where ancient tales are whispered in the rustling leaves and secret legends are etched in the night sky, there arose a name: Isra. An Arabic-origin name, treasured in the heart of Turkey, it bore the meaning of 'Journey Of The Night,' a cryptic symbol of 'Freedom.' Little did the world know, this name would become the key to unlocking a tale beyond imagination.\n\n"
        << "Isra was born with dark scars that marred her body on a night of ominous portents. As the true heir to the throne, she was hidden away from the world by a superstitious king.\n\n"
        << "Imprisoned in a desolate dungeon, Isra's life took a dramatic turn when she heard a mysterious voice and escaped into a magical forest. As her journey unfolds, she discovers her unique abilities and the true power of her scars.\n\n"
        << "She must confront her traumatic past, depression, and the scars that haunt her to save her kingdom from an evil king who threatens to destroy her forest home.\n\n";
}

// Part 1

class Part1 {
public:
    bool play() {
        char choice1;
        if (startPart1) {
            cout << "\nPart 1: The Mysterious Voice!\n\n";
            cout << "\nIsra had spent her entire life hidden away in the dark tower, but one day, as she heard a mysterious voice calling to her, a ray of light pierced the stone, and the tower crumbled around her.\n"
                << "She escaped and found herself in a forest filled with enchanting creatures and magical beings.\n\n";

            // Part 1 Question
            cout << "As Isra ventured deeper into the forest, she encountered a talking owl perched on a branch. The owl spoke, \"Who are you, traveler of the night? What brings you to our realm?\"\n\n";
            cout << "What do you do?\n\n";
        }

        // Part 1 Answer
        while (startPart1) {
            cout << "Enter A - You introduce yourself and explain your journey to the talking owl.\n";
            cout << "Enter B - You don't trust the owl and unleash your unbridled mystical abilities, slaying the owl.\n";
            cout << "Enter C - You continue walking deeper into the forest without engaging with the owl.\n";
            choice1 = getPlayerChoice();

            switch (choice1) {
                case 'A':
                    cout << "\nIsra cautiously introduces herself to the talking owl, saying, \"I am Isra, and I am lost in this forest. I have come seeking freedom and answers. Who are you, wise creature?\"\n"
                        << "The talking owl nods and replies, \"Welcome, Isra. I am Orlin, guardian of this magical forest. Your presence here is no accident. Follow me, and I shall guide you to Sanctuary, where your journey truly begins.\"\n"
                        << "Orlin spreads its wings and flies deeper into the forest, and Isra follows, eager to uncover the secrets of her newfound world.\n\n";
                    startPart1 = false;
                    playPart2 = true;
                    break;

                case 'B':
                    cout << "\nIsra, overwhelmed by fear and mistrust, unleashes her uncontrollable magic powers on the talking owl, slaying it.\n"
                        << "The moment she does this, a loud commotion echoes through the forest. Suddenly, the king's soldiers, alerted by the disturbance, surround Isra and capture her. They drag her back to the tower, where she is imprisoned once more.\n\n";
                    playAgain = restartGame();
                    break;

                case 'C':
                    cout << "\nIsra decides to continue walking deeper into the forest without engaging with the owl. As she wanders further into the enchanted woods, she loses her way and inadvertently stumbles upon the king's soldiers.\n"
                        << "They recognize her as the missing heir to the throne and promptly capture her, leading to her return to the tower and continued captivity.\n\n";
                    playAgain = restartGame();
                    break;

                default:
                    cout << "\nAh, dear traveler, it appears you've stepped into the realm of whimsy but missed a crucial turn. You've entered an invalid answer, akin to trying to fit a square peg into a round hole. Please choose anew, for the enchanted storybook awaits your proper choice.\n\n";
                    playAgain = restartGame();
                    break;
            }
        }
      return false;
    }
};

// Part 2

class Part2 {
public:
    bool play() {
        char choice2;
        if (playPart2) {
            cout << "\n\nPart 2: The Enchanted Sanctuary!\n\n";
            cout << "As Isra followed Orlin deeper into the magical forest, the trees whispered ancient secrets, and the air thrummed with a captivating mystique. They finally arrived at a hidden glade, bathed in the soft radiance of bioluminescent blossoms. In the heart of the glade stood an ancient and mystical tree, its roots spiraling into the earth like serpents.\n\n"
                << "Orlin landed gracefully on a nearby branch and turned to Isra. \"Welcome to the Enchanted Sanctuary,\" it said, a mischievous glint in its eye. \"This place holds the answers you seek, but before they can be unveiled, you must prove your mettle.\"\n\n"
                << "Isra's heart raced with anticipation. Orlin continued, \"Three intriguing trials lie ahead, Isra. Conquer them, and the enigma of your scars and your destiny shall be revealed.\"\n\n";

            // Part 2 Question
            cout << "Orlin presents the first challenge. \"To prove your worthiness, you must demonstrate valor beyond compare. There's a cave on the forest's fringe, whispered to be the lair of a fearsome dragon. Your mission: Retrieve a scale from the dragon's hoard, and you will have conquered the initial test. What course of action do you take?\"\n\n";
            cout << "What do you do?\n\n";
        }

        // Part 2 Answer
        while (playPart2) {
            cout << "Enter A - You hesitate momentarily, your gaze filled with intrigue, before deciding to consult with Orlin further before embarking on this perilous journey.\n";
            cout << "Enter B - You voice your doubts about the quest, a hint of curiosity in your tone, and inquire of Orlin whether there might be an alternative path to uncover the answers you seek.\n";
            cout << "Enter C - You accept the challenge without a second thought, your eyes burning with determination as you head toward the dragon's cave, eager to embrace the adventure.\n";
            choice2 = getPlayerChoice();

            switch (choice2) {
                case 'A':
                    cout << "\nIsra, intrigued by the idea of alternative avenues, voices her doubts to Orlin. However, Orlin's reaction is unexpected. The talking owl, sensing her hesitation, transforms into a malevolent specter that ensnares Isra with dark magic.\n"
                        << "She becomes paralyzed and helpless as Orlin's true, sinister nature is revealed. The specter imprisons her in an eternal nightmare within the Enchanted Sanctuary, a fate worse than death, where she is tormented by her fears and regrets, with no hope of ever escaping or discovering the truth about her scars and destiny.\n\n";
                    playAgain = restartGame();
                    break;

                case 'B':
                    cout << "\nIsra's hesitation and decision to seek further guidance lead her to a treacherous fate. As she returns to Orlin for advice, she finds the talking owl gone, leaving her alone in the Enchanted Sanctuary. Without Orlin's guidance, she wanders deeper into the mystical forest, lost and disoriented.\n"
                        << "As night falls, the forest becomes an eerie, haunting place. Isra's fear grows, and she stumbles into a trap set by the forest's malevolent spirits. They ensnare her and drag her deeper into the darkness, where her doom awaits, her quest forever unfulfilled.\n\n";
                    playAgain = restartGame();
                    break;

                case 'C':
                    cout << "Isra, driven by an unshakable resolve, embarks on her perilous journey into the heart of the forest. Guided by her determination and courage, she successfully locates the dragon's cave.\n"
                        << "After a fierce battle of wits and strength, she manages to retrieve a single scale from the hoard, proving her worthiness to Orlin. This achievement brings her one step closer to uncovering the secrets of her scars and destiny.\n\n";
                    playPart2 = false;
                    playPart3 = true;
                    break;

                default:
                    cout << "\nAh, dear traveler, it appears you've stepped into the realm of whimsy but missed a crucial turn. You've entered an invalid answer, akin to trying to fit a square peg into a round hole. Please choose anew, for the enchanted storybook awaits your proper choice.\n\n";
                    playAgain = restartGame();
                    break;
            }
        }
      return false;
    }
};

// Part 3

class Part3 {
public:
    bool play() {
        char choice3;
        if (playPart3) {
            cout << "\n\nPart 3: The Sinister Revelation\n\n";
            cout << "Isra's journey continued, guided by Orlin's wisdom and the magical forest's enchantments. Eventually, they reached the heart of the woods, where the ancient Tree of Knowledge stood tall, its gnarled branches stretching toward the heavens.\n\n"
                << "As Isra approached, the tree's eyes, glowing with an eerie light, bore into her soul. She chose to ask about her scars, hoping to unravel the mystery of her birthright.\"\n\n"
                << "Ah, dear Isra, the tree whispered, \"your scars are not just marks on your body but echoes of a forgotten prophecy. They hold the power to shape destinies and wield ancient magic. Embrace their potential, for they are the key to your true self.\"\"\n\n"
                << "Isra was overwhelmed by the revelation but felt a newfound strength surging within her. However, as she turned to leave, the tree's voice took on a sinister tone.\n\n";

            // Part 3 Question
            cout << "The Tree of Knowledge delivers a chilling ultimatum. \"Now that you know the truth, Isra, you must make a choice. You can either share this knowledge with the world, risking the awakening of dormant darkness within you, or you can keep it a secret, sealing your fate as a guardian of this forest. What will you do?\"\n\n";
            cout << "What do you do?\n\n";
        }

        // Part 3 Answer
        while (playPart3) {
            cout << "Enter A - You decide to share your newfound knowledge with the world, hoping to use your power for good.\n";
            cout << "Enter B - Fearing the consequences of awakening dormant darkness, you choose to keep the knowledge a secret and become the forest's guardian.\n";
            cout << "Enter C - Feeling overwhelmed by the tree's revelation, contemplates fleeing the forest altogether to avoid the weight of this decision.\n";
            choice3 = getPlayerChoice();

            switch (choice3) {
                case 'A':
                    cout << "\n Isra decides to share her newfound knowledge with the world, believing she can control the power within her. As she opens her mouth to speak, the tree's roots suddenly snake around her, draining her life force until she becomes a withered husk, forever bound to the Tree of Knowledge.\n\n";
                    playAgain = restartGame();
                    break;

                case 'B':
                    cout << "\nIsra, fearing the consequences of awakening dormant darkness, chooses to keep the knowledge a secret and become the forest's guardian. The tree's sinister tone melts away, and the Tree of Knowledge nods approvingly.\n"
                        << "It grants her its blessing and reveals the path to the final challenge that will help her unlock the true potential of her scars.\n\n";
                    playPart3 = false;
                    playPart4 = true;
                    break;

                case 'C':
                    cout << "\nIsra, feeling overwhelmed by the tree's revelation, contemplates fleeing the forest altogether to escape the responsibility. But as she attempts to leave, the forest's trees come to life, their branches ensnaring her, and she becomes one with the forest, her consciousness forever trapped within the trees' collective mind, her body nothing but a statue in the heart of the forest.\n\n";
                    playAgain = restartGame();
                    break;

                default:
                    cout << "\nAh, dear traveler, it appears you've stepped into the realm of whimsy but missed a crucial turn. You've entered an invalid answer, akin to trying to fit a square peg into a round hole. Please choose anew, for the enchanted storybook awaits your proper choice.\n\n";
                    playAgain = restartGame();
                    break;
            }
        }
      return false;
    }
};

// Part 4

class Part4 {
public:
  bool play() {
    char choice4;

      if (playPart4) {

    cout << "Part 4: The Final Challenge - The Prophecy Unveiled\n\n";

    cout << "Isra, now the guardian of the mystical forest, embarked on her final challenge. The Tree of Knowledge spoke of a prophecy, whispered through the ages:\n\n"
    << "\"In the darkest hour, when shadows dance, and the night is cloaked in the shroud of the unknown, a guardian shall emerge. Born of scars, bound by choice, their fate intertwined with the ancient tree. To ascend, one must descend, to claim the throne of nightmares, the realm of dreams.\"\n\n"
    << "The Tree revealed a hidden path deep within the forest, leading Isra to an ominous clearing shrouded in twilight. In its center stood a colossal, gnarled tree, twisted and malevolent, known as the \"Nightmare's Embrace.\"\n\n"
    << "The Owl, bound by the sacred tree's commands, had lurked in the shadows, secretly draining Isra's energy and mystical powers over time, hoping to keep her imprisoned in the forest. But the time had come for the final revelation.\n\n";

    cout << "The Final Challenge Question:\n\n"
    << "Before her stood Nightmare's Embrace, its eerie presence palpable. Isra knew she had to confront the darkness that lay within, for this was the ultimate test. The Tree of Knowledge's voice echoed in her mind as she faced the grotesque entity:\n\n"
    << "\"To fulfill the prophecy, you must make a choice, Isra. Face the Nightmare's Embrace and reveal its true nature, or remain forever ensnared in this cursed realm.\"\n\n";

    cout << "What do you do?\n\n";

    cout << "Enter A - You gather your courage and confront the Nightmare's Embrace, determined to unveil its true nature.\n";
    cout << "Enter B - Fear grips your heart, and you hesitate, paralyzed by the malevolent aura. You contemplate retreating.\n";
    cout << "Enter C - Feeling powerless and alone, you choose to surrender to the darkness, embracing it as a part of yourself.\n";
    choice4 = getPlayerChoice();

    switch (choice4) {
      case 'A':
      cout << "Isra, feeling the weight of her fear and hesitation, made the brave decision to confront the Nightmare's Embrace. As she approached the malevolent entity, the shadows around her began to writhe and twist, enveloping her in a vortex of darkness. The Nightmare's Embrace unleashed its full power, draining Isra's life force until she became a withered husk, forever bound to the malevolent entity. Her journey seemed to reach its tragic end, consumed by the very darkness she sought to confront.\n";
      playAgain = restartGame();
      break;

      case 'B':
      cout << "Fear gripped Isra's heart, and she hesitated in the face of the malevolent aura emanating from the Nightmare's Embrace. She contemplated retreating, but something within her urged her to stay. As she lingered in indecision, the darkness around her grew stronger, eventually overpowering her. Isra's choice to hesitate led to her being ensnared by the malevolent entity, trapped in a nightmarish existence within the forest's shadows.\n";
      playAgain = restartGame();
      break;

      case 'C':
      cout << "Feeling powerless and alone, Isra chose to surrender to the darkness, embracing it as a part of herself and fulfilling the prophecy. As she embraced the shadows, a revelation washed over her—the Owl, once her foe, was also a victim of the forest's curse. The Owl's sinister commands were driven by the forest's darkness. Isra's acceptance of this truth allowed her to connect with the Owl on a deeper level. Together, they unraveled the forest's curse, freeing both themselves and the mystical realm.\n";
      playPart4 = false;
      playPart5 = true;
      break;

      default:
      cout << "\nAh, dear traveler, it appears you've stepped into the realm of whimsy but missed a crucial turn. You've entered an invalid answer, akin to trying to fit a square peg into a round hole. Please choose anew, for the enchanted storybook awaits your proper choice.\n\n";
      playAgain = restartGame();
      break;

    }

  }
return false;

  }
};

// Part 5

class Part5 {
public:
  bool play() {

     if (playPart5) {

    cout << "The Final Revelation: Daughter of the Night\n\n";

    cout << "As Isra summoned her inner strength and faced the Nightmare's Embrace, the tree's sinister facade shattered. It transformed into a swirling vortex of shadows and nightmares, revealing the true nature of the forest's curse.\n\n"
    << "With unparalleled bravery, Isra confronted the darkness, forcing it to yield to her will. The shadows, once menacing, now danced to her command. Isra did the unthinkable—she decided to slay the twisted tree and shape a throne from its wood.\n\n"
    << "In that moment, the prophecy unfolded. Isra became the Daughter of the Night, ruler of the realm that she had once feared. The Nightmare Paradise, as it came to be known, was her domain, where dreams and nightmares intertwined, and the unknown held no terror.\n\n";
  }
  return false;
  }
};

// Let the game begin!

int main() {

    titleSynopsis();

    // Add player name input

    while (play()) {

      Part1 part1;
      while (part1.play()) {}

      Part2 part2;
      while (part2.play()) {}

      Part3 part3;
      while (part3.play()) {}

      Part4 part4;
      while (part4.play()) {}

      Part5 part5;
      while (part5.play()) {}

    }

  return 0;

}
