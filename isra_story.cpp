#include <iostream>
using namespace std;

// Functions

bool restartGame() {
    char playAgain;
    cout << "Would you like to start over? (Y/N) : \n\n";
    cin >> playAgain;
    if (toupper(playAgain) == 'Y') {
        return true;
    } else {
        cout << "\nFare thee well, valiant traveler of the mystical realm! Thank you for partaking in this fantastical adventure!\n";
        return false;
    }
}


bool play() {
  char playGame;
  cout << "Would you like to embark on your quest? (Y/N) : \n\n";
  cin >> playGame;
  if (toupper(playGame) == 'Y') {
    bool startPart1 = true;
    } else {
    cout << "\nFare thee well, valiant traveler of the mystical realm! Thank you for partaking in this fantastical adventure!\n";
    return false;
  }
}

int main () {


  bool startPart1 = play();
  char choice1;
  char choice2;
  char choice3;
  bool playAgain = true;
  bool playPart2 = false;
  bool playPart3 = false;

  
    // Titles

  bool titleSynopsis() {
  cout << "\nRealm of Arcane Trials: The Enigma Unveiled!\n\n";
  cout << "Greetings, intrepid soul. Do you dare to embark on a captivating odyssey, where the quest for your deepest truths awaits?\n\n";
  
  // Synopsis

  cout << "In the mystical land of enchantments, where ancient tales are whispered in the rustling leaves and secret legends are etched in the night sky, there arose a name: Isra. An Arabic-origin name, treasured in the heart of Turkey, it bore the meaning of 'Journey Of The Night,' a cryptic symbol of 'Freedom.' Little did the world know, this name would become the key to unlocking a tale beyond imagination.\n\n"
  << "Isra was born with dark scars that marred her body on a night of ominous portents. As the true heir to the throne, she was hidden away from the world by a superstitious king.\n\n"
  << "Imprisoned in a desolate dungeon, Isra's life took a dramatic turn when she heard a mysterious voice and escaped into a magical forest. As her journey unfolds, she discovers her unique abilities and the true power of her scars.\n\n"
  << "She must confront her traumatic past, depression, and the scars that haunt her to save her kingdom from an evil king who threatens to destroy her forest home.\n\n";

  }

  // Part 1

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
  
  cout << "\nEnter your choice\n\n";
  cin >> choice1;

  choice1 = toupper(choice1);

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
    << "They recognize her as the missing heir to the throne and promptly capturye her, leading to her return to the tower and continued captivity.\n\n";
    playAgain = restartGame();
    break;

    default:
    cout << "\nAh, dear traveler, it appears you've stepped into the realm of whimsy but missed a crucial turn. You've entered an invalid answer, akin to trying to fit a square peg into a round hole. Please choose anew, for the enchanted storybook awaits your proper choice.\n\n";
    playAgain = restartGame();
    break;

    }

  }
  


  // Part 2


  if (playPart2) {


  cout << "\n\nPart 2: The Enchanted Sanctuary!\n\n";

  cout << "As Isra followed Orlin deeper into the magical forest, the trees whispered ancient secrets, and the air thrummed with a captivating mystique. They finally arrived at a hidden glade, bathed in the soft radiance of bioluminescent blossoms. In the heart of the glade stood an ancient and mystical tree, its roots spiraling into the earth like serpents.\n\n"
  << "Orlin landed gracefully on a nearby branch and turned to Isra. \"Welcome to the Enchanted Sanctuary,\" it said, a mischievous glint in its eye. \"This place holds the answers you seek, but before they can be unveiled, you must prove your mettle.\"\n\n"
  << "Isra's heart raced with anticipation. Orlin continued, \"Three intriguing trials lie ahead, Isra. Conquer them, and the enigma of your scars and your destiny shall be revealed.\"\n\n";

  // Part 2 Question

  cout << "Orlin presents the first challenge. \"To prove your worthiness, you must demonstrate valor beyond compare. There's a cave on the forest's fringe, whispered to be the lair of a fearsome dragon. Your mission: Retrieve a scale from the dragon's hoard, and you will have conquered the initial test. What course of action do you take?\"\n\n";

  cout << "What do you do?\n\n";
  
  // Part 2 Answer

  while (playPart2) {
  cout << "Enter A - You hesitates momentarily, your gaze filled with intrigue, before deciding to consult with Orlin further before embarking on this perilous journey.\n";
  cout << "Enter B - You voice your doubts about the quest, a hint of curiosity in your tone, and inquires of Orlin whether there might be an alternative path to uncover the answers you seeks.\n";
  cout << "Enter C - You accept the challenge without a second thought, your eyes burning with determination as you heads toward the dragon's cave, eager to embrace the adventure.\n";

  cout << "\n\nEnter your choice\n\n";
  cin >> choice2;

  choice2 = toupper(choice2);

  switch (choice2) {
    case 'A' :
     cout << "\nIsra, intrigued by the idea of alternative avenues, voices her doubts to Orlin. However, Orlin's reaction is unexpected. The talking owl, sensing her hesitation, transforms into a malevolent specter that ensnares Isra with dark magic.\n"
    << "She becomes paralyzed and helpless as Orlin's true, sinister nature is revealed. The specter imprisons her in an eternal nightmare within the Enchanted Sanctuary, a fate worse than death, where she is tormented by her fears and regrets, with no hope of ever escaping or discovering the truth about her scars and destiny.\n\n";
    playAgain = restartGame();
    break;

    case 'B' :
    cout << "\nIsra's hesitation and decision to seek further guidance lead her to a treacherous fate. As she returns to Orlin for advice, she finds the talking owl gone, leaving her alone in the Enchanted Sanctuary. Without Orlin's guidance, she wanders deeper into the mystical forest, lost and disoriented.\n"
    << "As night falls, the forest becomes an eerie, haunting place. Isra's fear grows, and she stumbles into a trap set by the forest's malevolent spirits. They ensnare her and drag her deeper into the darkness, where her doom awaits, her quest forever unfulfilled.\n\n";
    playAgain = restartGame();
    break;

    case 'C' :
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

    // Part 3


  if (playPart3) {


  cout << "\n\nPart 3: The Sinister Revelation\n\n";

  cout << "Isra's journey continued, guided by Orlin's wisdom and the magical forest's enchantments. Eventually, they reached the heart of the woods, where the ancient Tree of Knowledge stood tall, its gnarled branches stretching toward the heavens.\n\n"
  << "As Isra approached, the tree's eyes, glowing with an eerie light, bore into her soul. She chose to ask about her scars, hoping to unravel the mystery of her birthright.\"\n\n"
  << "Ah, dear Isra, the tree whispered, \"your scars are not just marks on your body but echoes of a forgotten prophecy. They hold the power to shape destinies and wield ancient magic. Embrace their potential, for they are the key to your true self.\"\"\n\n"
  << "Isra was overwhelmed by the revelation but felt a newfound strength surging within her. However, as she turned to leave, the tree's voice took on a sinister tone.\n\n";

  // Part 3 Question

  cout << "The Tree of Knowledge delivers a chilling ultimatum. \"Now that you know the truth, Isra, you must make a choice. You can either share this knowledge with the world, risking the awakening of dormant darkness within you, or you can keep it a secret, sealing your fate as a guardian of this forest. What will you do?\"\n\n";

  cout << "What do you do?\n\n";

    // Part 3 Answer

  while (playPart3) {
  cout << "Enter A - You decide to share your newfound knowledge with the world, hoping to use your power for good.\n";
  cout << "Enter B -  Fearing the consequences of awakening dormant darkness, you choose to keep the knowledge a secret and become the forest's guardian.\n";
  cout << "Enter C - Feeling overwhelmed by the tree's revelation, contemplates fleeing the forest altogether to avoid the weight of this decision.\n";

  cout << "\n\nEnter your choice\n\n";
  cin >> choice3;

  choice3 = toupper(choice3);

  switch (choice3) {
    case 'A' :
     cout << "\n Isra decides to share her newfound knowledge with the world, believing she can control the power within her. As she opens her mouth to speak, the tree's roots suddenly snake around her, draining her life force until she becomes a withered husk, forever bound to the Tree of Knowledge.\n\n";
    playAgain = restartGame();
    break;

    case 'B' :
    cout << "\nIsra, fearing the consequences of awakening dormant darkness, chooses to keep the knowledge a secret and become the forest's guardian. The tree's sinister tone melts away, and the Tree of Knowledge nods approvingly.\n"
    << "It grants her its blessing and reveals the path to the final challenge that will help her unlock the true potential of her scars.\n\n";
    playPart3 = false;
    break;

    case 'C' :
    cout << "\nIsra, feeling overwhelmed by the tree's revelation, contemplates fleeing the forest altogether to escape the responsibility. But as she attempts to leave, the forest's trees come to life, their branches ensnaring her, and she becomes one with the forest, her consciousness forever trapped within the trees' collective mind, her body nothing but a statue in the heart of the forest.\n\n";
    playAgain = restartGame();
    break;
    
    default:
    cout << "\nAh, dear traveler, it appears you've stepped into the realm of whimsy but missed a crucial turn. You've entered an invalid answer, akin to trying to fit a square peg into a round hole. Please choose anew, for the enchanted storybook awaits your proper choice.\n\n";
    playAgain = restartGame();
    break;

    }

   }

  
  }

return 0;

}

}
