#include "sampen.hpp"
#include<iostream>
int main()
{
	//float in[50];
	int ct=0;
int length=100;	int samp;
float testdata[10][100] = {
{0.15626768939954064, 0.15815375787412989, 0.04862616294063826, 0.14469131105518085, 0.454608677997563, 0.22371439907828444, 0.5217728028364129, 0.1495478981886103, 0.4485306263174951, 0.6641968377957777, 0.7072569399762658, 0.8206989335478132, 0.7366493809901771, 0.602376354063773, 0.7186159250778102, 0.8139639500437214, 0.8199165880847407, 0.9376512695995118, 1.0402235484877935, 0.9850093028421671, 0.7456835978515999, 0.7977606757102653, 0.8870190093879655, 0.7428056828114832, 0.8681419156415155, 1.223906733357954, 0.9544761074229072, 1.100960049046618, 0.9374511159419978, 0.9350666520127704, 0.8693749887339985, 0.885157175360353, 0.627038925204475, 0.8354476142422376, 0.90682311574334, 0.940361522059867, 0.7725026008054428, 0.8652772047719905, 0.7598533359714145, 0.676210439355399, 0.41824044480520994, 0.5166394957700794, 0.4432493905020503, 0.3971985445454765, 0.36593087541200536, 0.19708365447285844, 0.30852878590850374, 0.14193739588738616, -0.03818252601467245, 0.06125416475334931, 0.16390499220972896, -0.17023493021353303, -0.3297862608250981, -0.24283686249343855, -0.3330097116807229, -0.3217784359948647, -0.2306456831447108, -0.5611619932838455, -0.5434716989695595, -0.5693974344758048, -0.48098514982067, -0.7878240971042058, -0.5903066440537127, -0.8291799253223315, -0.5376565749518839, -0.8559359352083175, -0.9319808338112, -0.6408801504243065, -0.7152006505750547, -1.0733968629839354, -1.0912706133223606, -0.9271218716779216, -0.8011807452170125, -0.8817251852631284, -1.1946139538230114, -0.9306152826142258, -1.3203545023669845, -1.0421387325850768, -1.1628114968017198, -1.085695388515477, -1.1128155420560437, -1.0164116986205598, -0.8020846091740641, -0.777679845935716, -0.8950625197617528, -0.7765082371545696, -0.9233333804880293, -0.8787575976907637, -0.5480983903871075, -0.6254308737376102, -0.5531860946186418, -0.5689411511764342, -0.4062790078631997, -0.188049000120903, -0.167355588821069, -0.0440015688744691, -0.16361291841472259, -0.09680669221706828, -0.0979131052647016, 0.12425982459515485},
{-0.024410491103499944, -0.10827364673114785, 0.0696096638279281, 0.12458289763411129, 0.3550429286930294, 0.09259999804657684, 0.40307766707139603, 0.45860928453920613, 0.7320176471373843, 0.5426194833668405, 0.46291648881339165, 0.7255271880743348, 0.7681983374847542, 0.8042464081239808, 0.7642859256130072, 0.738285105380459, 0.7627593032340367, 0.8543455690689993, 0.993048793289069, 0.8908130970448075, 1.0805599693425851, 0.9670761463649706, 0.8321821678500468, 0.9371095074673264, 1.135641257749755, 0.8565191830217308, 0.965002120569074, 0.8164047085461517, 0.8251970606834148, 0.852504434851734, 0.8830706763524526, 0.934414607367536, 0.7086477881206275, 0.8141750308464414, 0.9329026637546843, 0.6262513903604657, 0.6749527177974013, 0.7541609948529755, 0.5226905986952535, 0.5540548113776154, 0.5347787807219483, 0.6338631441676099, 0.33025221799324905, 0.23131812352605208, 0.5498337699886338, 0.3280499091703839, 0.24360687698729375, 0.13454745798703188, 0.05596353466903807, 0.08881327788511537, -0.044410065295797614, -0.054986222836044193, -0.009537623760012215, -0.393078351279568, -0.27355207492853656, -0.29221177925059943, -0.3437843374266188, -0.6135332522897294, -0.3906621435031313, -0.48044006687128965, -0.42905746176253656, -0.7102445253301409, -0.5587565794387621, -0.7944066999194113, -0.6816067909249541, -0.9355866970571838, -0.7537749415746537, -0.9542726244898495, -0.9224246092779183, -1.0533513878000202, -0.8079182491490016, -0.8802364857567265, -1.0020097895548246, -0.8321125176206012, -1.111794998737559, -1.046813541623567, -0.9910682464437882, -1.2172760700818666, -0.968323085228622, -0.9116672027885513, -0.6812821215002262, -0.8582841490746824, -0.8764540768910679, -0.9666174381692829, -0.6982787005024976, -1.0559398663623552, -0.8127357372453021, -0.6968295460631573, -0.6492699771988939, -0.7470893175591442, -0.4714719581060158, -0.47091549206785255, -0.3124689443781784, -0.27378938576394285, -0.21016227034488133, 0.04014008212215786, -0.12187651060529463, -0.2755793746918378, -0.17688712637123688, -0.03543144199579976},
{0.032411533470253634, 0.06506741819222242, 0.07106993837491067, 0.3926261735092047, 0.1430471402989768, 0.21477590039169092, 0.19035152816672235, 0.488936137500422, 0.5645790508729917, 0.48542384352125445, 0.7348873851358853, 0.754262970769932, 0.5804935582363937, 0.5470083623453109, 0.7274498673069562, 0.7442734148810572, 0.871993970618301, 0.7406679350999626, 0.9027672511593144, 1.0618922242111906, 0.9198678155925968, 0.9488370902122835, 0.9129812891847847, 1.034858626785315, 0.9965144051113882, 1.2741027694398344, 1.0781322283904495, 1.1401936092759717, 1.0496214684700718, 0.7847578335452476, 0.896235649513467, 0.9557034371655191, 0.854720262886004, 0.7894312396657701, 1.0332568505594628, 0.5676941364900373, 0.7168601171745608, 0.6825089127254869, 0.9233006894238442, 0.5965588909417225, 0.5780770478339496, 0.5547049923078603, 0.5075606545492636, 0.32303790487232853, 0.3260594281754988, 0.39143285059984023, 0.4635462805838064, 0.1120883358255858, 0.13539331768731216, -0.02184398333140688, -0.22876431741824346, -0.32724766493986657, 0.07694153311691057, -0.33405259228871004, -0.284128191579028, -0.2979014969171054, -0.5089349796841066, -0.5601754479755597, -0.7135954358154442, -0.49684016430537126, -0.7133739987977329, -0.7320368350366266, -0.7809471295091703, -0.8557181853287175, -0.6830983068823682, -1.0194714796784234, -0.6956814363800766, -1.10313284313718, -0.8065095918272311, -0.9143623057058237, -0.9645577057375763, -0.8671071242044696, -1.205578819786091, -0.7959873430729604, -0.9577995960897757, -0.7706367604776411, -1.0811130535846147, -0.8162435263213271, -1.021516520579541, -1.1921780792435608, -0.7820489725362285, -0.7280182946809632, -1.0828606496276876, -0.8407811919425391, -0.8196426409210923, -0.7559748405217752, -0.9413081267139949, -0.8244853230065748, -0.663911041178904, -0.5763213772221533, -0.1867953625199642, -0.5416799320454441, -0.6072414013057159, -0.5324666086292553, -0.2777013033638438, -0.19277604758569702, -0.22037333448580787, -0.17950914561872341, 0.015723191892924468, -0.15829225131649913},
{0.023969285122504073, 0.09506200273825216, 0.23321775651322327, 0.0771747160354362, 0.19699998633962934, 0.33556163292020863, 0.39849665590298733, 0.5067020990348455, 0.3799745536983204, 0.6472087367832192, 0.31247291274332617, 0.6869303028989877, 0.6834563747541735, 0.6945133650428351, 0.9466030597332624, 0.826367646724076, 0.55495093636232, 0.8132805425520468, 0.7959131891823013, 0.9361308683977939, 1.116275130108907, 1.0758540827361283, 1.1954093778956052, 0.9638771513394339, 1.025106895653004, 0.934640123403623, 1.0551580706286277, 0.9721720455730822, 0.7199563473979558, 1.1386786620084313, 1.029960151591199, 0.8321997393891264, 0.7839973766272936, 0.9135068966481682, 0.7661376028354121, 0.8884608403495619, 0.98427719540434, 0.6608528493760671, 0.7410121256871363, 1.0318701801758015, 0.35958811355593634, 0.6377427617222439, 0.2505164611794721, 0.4074352545227928, 0.34957521414273574, 0.3393756907440913, 0.15995033772340075, 0.11397087423929012, 0.22820009571066818, 0.1771013192980652, 0.14385922836358858, 0.0050865083657120475, -0.2839939470070359, -0.24562476275955103, -0.24831570283928134, 0.01492091754967051, -0.34961830262132126, -0.3085005467170272, -0.44447629824584234, -0.5493744636402635, -0.5024703670197401, -0.8128043835269126, -0.7164808500008287, -0.6777722795962476, -0.873734784984435, -0.7815320108256855, -0.8313884006667797, -0.994304194800546, -0.8829799781593051, -1.2100105419924565, -1.2677937242092248, -1.0370680447694296, -0.9831403814006932, -1.0653278335029712, -0.7567929338307264, -1.0244341829526113, -0.9233273030252176, -0.9928830005064655, -0.6975396418223303, -0.8733332011533792, -0.9044478482984943, -0.991399210326682, -0.8641247945775501, -0.7681862160388987, -0.8087414283048441, -0.754468335579216, -0.7000801352813892, -0.7683086082197169, -0.5964027329031718, -0.518590005196674, -0.5622753672585636, -0.484719898562633, -0.533122972641061, -0.4507092427027706, -0.33797306483573997, -0.24488977340633386, -0.19701238517380482, 0.08230889929602658, -0.08736697773885391, -0.03779003212508899},
{0.29983423822846667, 0.17969435501253384, 0.05966095754684478, 0.30513744372153917, 0.13754833475491063, 0.32037572531464426, 0.5387462996095732, 0.4816625033443973, 0.47179170666794884, 0.42446812925510485, 0.486946928071343, 0.6832456256623379, 0.5373652151400614, 0.6269227011126324, 0.5943692476131514, 0.7486042149635086, 0.9340345765607545, 0.961654972831905, 0.786625985027333, 0.8985042858802849, 0.6145267434879913, 0.8504982794165947, 0.9396933427457216, 0.9024807970664688, 1.0974352563984513, 1.0329429628529097, 1.289332340279853, 1.1446613572928632, 0.9097430187914122, 0.8914602216135741, 0.9926378179343752, 1.0026279155982594, 1.0133658384099868, 0.9278736214691862, 0.9290787861387477, 0.7117332446546121, 0.7253617987891261, 0.7066793595602028, 0.743219679565646, 0.39946883471433836, 0.43171341828075427, 0.6148025243051475, 0.29459510084418794, 0.5311573351114288, 0.4750981077919829, 0.4106775550091563, 0.16813281555535303, 0.1936304381972703, 0.048266909894287724, 0.028413172645273942, -0.09829097031777193, -0.0969385924852642, -0.07256851619395226, -0.31900530116630793, -0.2739063333798489, -0.3479885772929472, -0.514409662307728, -0.411835384204024, -0.4863775627002047, -0.7285386887591887, -0.6192632795121756, -0.6277559348393983, -0.7388092112800348, -0.9742271229518081, -0.9231791013282846, -0.9205352742715819, -0.708995861357465, -1.0516177235906876, -0.8948816633708576, -1.0778240321561174, -1.1792702071553671, -1.186102979387533, -0.9314046844690632, -0.7537959299510855, -0.9413181665506515, -0.9770886522064585, -1.006591797234923, -0.9505941452237262, -0.8740946297213239, -1.066758679205551, -1.154654771508293, -1.1162156467986488, -0.9412551737787167, -0.6693989217260594, -1.002118311256377, -0.6415121585289789, -0.8061496573049446, -0.6452989657417031, -0.449244436331245, -0.7063912450456644, -0.57121413704333, -0.5434335722408236, -0.7138274690450993, -0.45865466405867616, -0.2643687688253801, -0.2987782455932982, 0.06355865924027193, -0.14063186705065422, -0.09132785008667169, -0.06845349780081755},
{-0.0453468791712883, -0.03693363402985844, 0.14070299091346716, 0.010643125278086224, 0.3597779913293894, 0.38685283149013355, 0.5409366478536308, 0.1746672117944098, 0.46487430333957425, 0.5254194588128527, 0.42707349843962683, 0.5889984871180373, 0.6425477121388128, 0.6792714786544058, 0.755959299146926, 0.7713181312626425, 0.7446642479193065, 0.8888926519610668, 0.9325294016573378, 0.9891384228143442, 1.1605064897100814, 0.9735570920170276, 1.1258894928576855, 0.9743187710585313, 1.251677729025798, 1.0343165061512292, 1.0632174182340364, 1.0646809286222572, 0.7491616134836032, 1.0897857333805496, 0.8060362431773285, 0.9891211755489957, 0.9875828237869908, 0.8196872525568697, 1.0406812662302278, 0.8522935285912427, 0.8229366193225395, 0.7522714188103363, 0.9136696217560553, 0.7126370831534002, 0.6547677156309175, 0.42634527923514687, 0.6293224151403555, 0.33064007021910913, 0.5008276971725052, 0.2571640953048387, 0.27099086295687147, 0.38108263045207424, 0.12293594896863987, -0.10740997169406358, -0.1434065991564933, 0.006829347951260861, -0.1382665467820349, -0.3255461355914914, -0.08833312950923608, -0.42841998412392435, -0.1957709354401659, -0.3998136787554222, -0.5551470104649137, -0.3970118371077028, -0.8140353134030233, -0.5645717120555175, -0.5638239409882226, -0.7181476664054985, -0.6298516440946906, -0.8130820734168994, -1.0615213665363483, -0.6914129531399957, -0.7910630716323925, -0.9451179581505119, -0.8461425663239786, -0.8938280823277026, -1.213859245813336, -1.143327658552056, -0.9856791982663125, -1.2099203572882817, -1.0932903190273122, -1.2318683398512384, -0.9928559196889049, -0.8086779072355623, -0.8653993444132972, -0.9552204479998447, -0.7743204228317544, -0.9016830984433721, -0.8926954053018874, -0.942783315759949, -0.659292319395555, -0.6113112322383993, -0.6281402579730793, -0.47911444789537727, -0.3485886111917851, -0.33624800530065907, -0.5356387045096032, -0.3702453857293439, -0.3848465611605559, -0.22016777371923496, -0.4372447906260654, -0.2230801139791459, 0.00199539686400714, 0.11505773891817393},
{-0.12340832382707169, -0.04704150969564397, 0.13067018208402922, 0.03259751945781758, 0.2446192476478404, 0.30100478223125116, 0.5098193804245008, 0.52041840439145, 0.48132949652877827, 0.5330951232657355, 0.554016710557975, 0.9014516368719562, 0.6413635102587221, 0.8592343182281994, 0.7154779449478529, 1.1069199744780032, 0.72208461142843, 0.9858727913827607, 0.7879372328088505, 1.0445133987175816, 0.8930564356747703, 1.0669355850604036, 1.3493403669455792, 1.2919293435913164, 0.8622270543738554, 1.0043036815644217, 1.1536353305135072, 1.0143255961932733, 0.9415218566482286, 1.0739838455077213, 0.9150485695377817, 0.9350215325525736, 0.938872262214339, 1.0048034284853546, 1.0264504636316996, 0.8751696435693372, 0.8826721972705376, 0.5509602929358848, 0.5678703468961536, 0.5102279820440838, 0.7035839374915999, 0.7048785186919353, 0.3672819955270075, 0.33658658456667634, 0.3480751626018637, 0.16132328362676596, 0.35310389410994825, 0.20615945094700389, 0.24290918575893672, 0.011536442242547684, 0.04133275429831187, -0.08454501427532204, -0.30279345869188523, -0.06994257645905883, -0.1810537947689254, -0.4062245801407893, -0.4390209285543346, -0.5106923965291199, -0.430429501537673, -0.5073376030092207, -0.7301195450372924, -0.7879653604348065, -0.6238805318356628, -0.7125806446671015, -0.7411095452277368, -0.8457600854157398, -0.9099641931745048, -1.0493579582405428, -1.0013617884115988, -0.9627938370288949, -0.78610026702451, -1.071740070212229, -0.8725852703615993, -0.8489002895548714, -1.1537090783928807, -0.9891753539400119, -0.7757927786528329, -1.128129359877771, -0.8476477294307128, -1.1436086078459744, -0.9181727736635822, -1.0282330640608959, -0.8849388808790737, -0.9960395782748065, -0.7157439956942688, -0.6705491822410722, -0.6403972450346455, -0.5637596845591424, -0.5986984496668165, -0.6459400196264902, -0.5659649454085056, -0.496328629513965, -0.46277348753238523, -0.3632364462133968, -0.4729264889347088, -0.28423252287993406, -0.0782481642159712, -0.1790401909952272, -0.0007661025593211357, -0.130537856509766},
{-0.14010899803486102, 0.13917611511518807, 0.164629486757715, 0.06468622549236183, 0.1525872791061742, 0.2997785184037234, 0.23985577316200446, 0.5102477921977748, 0.39509967638131327, 0.6499657216256182, 0.6854441932731477, 0.505924619574887, 0.815818051205561, 1.084375433228999, 0.7830494365075544, 0.7728901991076971, 0.7160016781343017, 0.7764567250090258, 0.804784090464723, 0.8829615306955514, 0.8187701989994063, 0.8857590579163019, 0.8526703353010301, 0.8186512274114368, 0.926507284411967, 0.9966371141836731, 0.8340968593583991, 0.8927349546122244, 1.0649236597889677, 0.8861728058372491, 0.8648764968853577, 0.727591736081608, 0.7155359717335075, 0.78885357078073, 0.8521486187274319, 0.6806377683741575, 0.6581970430648365, 0.5187085959543747, 0.5788090224419367, 0.7160546234390234, 0.4738368603393921, 0.5095399871099229, 0.2808208822788987, 0.6595819071828017, 0.3993920146747501, 0.408527706469051, 0.1389880522521869, 0.037925988648101094, 0.07165202459034344, -0.1744526609270607, 0.12356384291876807, -0.24806287855412176, -0.19077097471490068, -0.15013666844948612, -0.26334955883393313, -0.11676264822581092, -0.5274651427821134, -0.30864451235669965, -0.49862678116316367, -0.45374724981121994, -0.6660522785572789, -0.8688565595169663, -0.8106300535201627, -0.6503105917201202, -0.9323503014551076, -0.6564825519288753, -0.7652428735909685, -1.002479580875545, -0.9724690540291284, -1.101982643803269, -0.8645781385010107, -0.8537907065305699, -1.006634391785028, -0.8935473905035097, -1.0055052742044337, -0.8649719328956161, -0.9494416472470436, -1.0762913671513765, -0.8086495386681035, -0.9779306342039036, -1.0536421968470158, -0.8912134681794984, -0.8868064501820967, -0.739416050119634, -0.5528209070496081, -0.8758627721574477, -0.5492071179551492, -0.5542780110203642, -0.7325030989127124, -0.4336662210555461, -0.36815763231315135, -0.6358605146378087, -0.6004218030804147, -0.2122486848521373, -0.17015046333840536, -0.146616982928634, -0.1441345388757457, -0.10821044734075712, -0.14988026977907334, 0.16807905214319976},
{0.018417415170510747, 0.15961838271616774, -0.1355679419487732, 0.17957198613404762, 0.13836747328646276, 0.4897594139697944, 0.4151234935494385, 0.5492749233766112, 0.6254519310692574, 0.8519159538435427, 0.5914241320694661, 0.7168142643842348, 0.7340751367652516, 0.8574083736610362, 1.018819399977609, 1.0030078012207022, 0.7048452588222683, 0.9273410375402255, 0.8204910704099148, 1.0257712133682333, 1.0711027572821838, 0.8229480001298202, 0.7943143431753841, 0.8799549123155953, 0.9105792982747608, 1.029438248644172, 1.094066663131772, 0.8522571395813244, 1.1775101304948548, 0.6542759232869162, 0.984296553854886, 0.9768937275469277, 1.0026162879808946, 0.8198891112757118, 0.9770453007991358, 0.8926152865526578, 0.807933122812093, 0.5818610525035212, 0.5091928464982375, 0.3606959092039747, 0.7631402973307785, 0.5111766170177402, 0.47647283420318787, 0.46367554924579185, 0.2761380734398446, 0.10933882755599311, 0.21265705149047898, 0.4526758162922229, 0.0950407366441387, -0.02505422424854232, -0.1130392574443082, 0.12800657588190545, -0.13619845969953231, -0.317328056810431, -0.35978797976762855, -0.48223690260260865, -0.3057384996155388, -0.6584623452712368, -0.5617391066896665, -0.7780508736737578, -0.44378138441298387, -0.7681289515006539, -0.6273296189699925, -0.6662234941254653, -0.7956515450332857, -0.6351941796913345, -0.9987617092724103, -0.9417550306735192, -0.6967380299098208, -1.10399540202294, -1.0956253107504081, -0.8309921204777777, -0.8840720870228275, -1.168715710007408, -1.014810905003239, -0.7945816650480668, -0.9179149205558534, -0.842033406630826, -0.8674534936064091, -0.9065990978786763, -0.7890687411954111, -0.8309911334885454, -0.7772390371418573, -0.7556298041419311, -1.0477975738658936, -0.8679856142934013, -0.79253388286878, -0.7333752553768175, -0.7706776684312011, -0.7191451909621475, -0.6440311856825363, -0.42004188252602315, -0.35098464276979535, -0.30401294946541957, -0.29179596532591673, -0.2311318781261394, -0.22902293410655045, -0.27147792058536513, 0.09998077341317457, -0.010853344780475307},
{0.2578611795796655, 0.007630572130532573, 0.2179852252127768, 0.16607682206461405, 0.20988765916595328, 0.4072757673230072, 0.38010277414080007, 0.5655025264567688, 0.5998364624608508, 0.514446332205868, 0.4368536774288063, 0.3441878930167691, 0.8577295045064179, 0.5884123552230199, 0.7410626672564361, 0.7174698959812337, 0.8557868112612658, 0.8038763448127519, 0.7554675931125309, 0.9622824518739633, 1.0103157666405402, 0.9093938922492127, 0.8714900571265014, 0.8044825934011719, 0.8470722992385727, 1.2783240973110899, 1.1070273435359161, 1.1724524614280514, 0.7940789203808832, 1.0107082334145594, 0.8761214823038133, 1.1113400226907866, 0.9255948487855808, 0.9010506714095449, 0.9419502135139564, 0.6593691392241188, 0.662634075754563, 0.9259389823630418, 0.7274536735494037, 0.5265279825909632, 0.3254328437717766, 0.45295373921427795, 0.6845424605008968, 0.4244589325305507, 0.3296599679736935, 0.41584991541021255, 0.16153925879707656, 0.20698390410428485, 0.25844482106319466, 0.2086012296385761, 0.04043964107340701, -0.09651056735977771, -0.2668578401507492, -0.2866576885617796, -0.2850681701261569, -0.18844389788604973, -0.5484445365026112, -0.47259521757776773, -0.6012925364009939, -0.28087184430909085, -0.5274759753181056, -0.5459751424069982, -0.719592157286846, -0.6776769927798421, -0.9199583865475166, -0.9032888528118634, -0.7977808798080444, -0.7615763523547194, -0.5738163890133241, -0.8240422222783235, -0.92603943441115, -1.0442650825289366, -0.8825122058364389, -1.1216325227090231, -1.1590254024407483, -1.0111064490817732, -0.9019823204162262, -0.9618024297648421, -1.1015743316203515, -1.127182306275885, -0.9643512828506099, -0.8640298418149074, -0.9693790594412243, -0.7835701545908516, -0.8299698742125683, -0.7290737872352556, -0.7428356030614526, -0.8002457870351368, -0.7635036832470139, -0.4942632409154336, -0.6202322401236254, -0.4226636396686132, -0.36751547828379316, -0.30766176043637183, -0.42670078358724783, -0.3435446270061836, -0.11393181450966249, -0.09687223103760076, 0.009176991449023522, 0.1721822439834156}
};int testresult[10] = {731, 703, 841, 774, 851, 789, 574, 621, 689, 813};
	float in[100];


	for(int i = 0; i< 10;i++){
    	for(int j = 0 ;j < length;j++){
			in[j] = testdata[i][j];
		}
		sampen(in,length,samp);
		std::cout<<samp<<std::endl;
		if(samp != testresult[i]){ct = ct + 1;} 
	}


	
	if(ct == 0)
		std::cout<<"PASS"<<std::endl;
	else
		std::cout<<"FAIL"<<std::endl;
	return 0;
}