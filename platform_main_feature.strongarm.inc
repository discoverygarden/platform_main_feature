<?php

/**
 * @file
 * platform_main_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function platform_main_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_image';
  $strongarm->value = 'share_16_16.png|16|16';
  $export['addtoany_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_nodetypes';
  $strongarm->value = array(
    'article' => 0,
    'page' => 0,
    'image_block' => 0,
  );
  $export['addtoany_nodetypes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_bg_color';
  $strongarm->value = '#F7F7F7';
  $export['back_to_top_bg_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_border_color';
  $strongarm->value = '#CCCCCC';
  $export['back_to_top_border_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_place';
  $strongarm->value = '3';
  $export['back_to_top_button_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_trigger';
  $strongarm->value = '100';
  $export['back_to_top_button_trigger'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_type';
  $strongarm->value = 'image';
  $export['back_to_top_button_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_hover_color';
  $strongarm->value = '#EEEEEE';
  $export['back_to_top_hover_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_in_admin';
  $strongarm->value = 1;
  $export['back_to_top_prevent_in_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_on_mobile';
  $strongarm->value = 1;
  $export['back_to_top_prevent_on_mobile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_text_color';
  $strongarm->value = '#333333';
  $export['back_to_top_text_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blockify_blocks';
  $strongarm->value = array(
    'blockify-logo' => 'blockify-logo',
    'blockify-page-title' => 'blockify-page-title',
    'blockify-breadcrumb' => 'blockify-breadcrumb',
    'blockify-site-name' => 0,
    'blockify-site-slogan' => 0,
    'blockify-tabs' => 0,
    'blockify-messages' => 0,
    'blockify-actions' => 0,
    'blockify-feed-icons' => 0,
  );
  $export['blockify_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'designkit_color';
  $strongarm->value = array(
    'background' => '#E2E2E2',
    'header' => '#E2E2E2',
    'content' => '#ffffff',
    'navigation' => '#E2E2E2',
    'footer' => '#E2E2E2',
    'sidebars' => '#ffffff',
  );
  $export['designkit_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '2';
  $export['error_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/default/files/private';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_basic_collection_display_backend';
  $strongarm->value = 'islandora_solr_query_backend';
  $export['islandora_basic_collection_display_backend'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_breadcrumbs_backends';
  $strongarm->value = 'islandora_breadcrumbs_legacy_sparql';
  $export['islandora_breadcrumbs_backends'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_metadata_display';
  $strongarm->value = 1;
  $export['islandora_collection_metadata_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_search_advanced_search_alter';
  $strongarm->value = 0;
  $export['islandora_collection_search_advanced_search_alter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_search_all_pages';
  $strongarm->value = 1;
  $export['islandora_collection_search_all_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_search_display_label';
  $strongarm->value = 0;
  $export['islandora_collection_search_display_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_search_retain_search_values';
  $strongarm->value = 1;
  $export['islandora_collection_search_retain_search_values'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_search_searchable_collections';
  $strongarm->value = array(
    'islandora:bhs' => 'islandora:bhs',
    'islandora:maps' => 'islandora:maps',
    'islandora:OH0000' => 'islandora:OH0000',
    'islandora:photosdocs' => 'islandora:photosdocs',
    'islandora:213' => 0,
    'islandora:212' => 0,
    'islandora:214' => 0,
    'islandora:217' => 0,
    'islandora:216' => 0,
    'islandora:211' => 0,
    'islandora:206' => 0,
    'islandora:205' => 0,
    'islandora:207' => 0,
    'islandora:210' => 0,
    'islandora:209' => 0,
    'islandora:208' => 0,
    'islandora:218' => 0,
    'islandora:227' => 0,
    'islandora:226' => 0,
    'islandora:228' => 0,
    'islandora:328' => 0,
    'islandora:229' => 0,
    'islandora:225' => 0,
    'islandora:220' => 0,
    'islandora:219' => 0,
    'islandora:221' => 0,
    'islandora:224' => 0,
    'islandora:223' => 0,
    'islandora:222' => 0,
    'islandora:215' => 0,
    'islandora:072' => 0,
    'islandora:070' => 0,
    'islandora:362' => 0,
    'islandora:335' => 0,
    'islandora:513' => 0,
    'islandora:344' => 0,
    'islandora:532' => 0,
    'islandora:276' => 0,
    'islandora:585' => 0,
    'islandora:862' => 0,
    'islandora:769' => 0,
    'islandora:508' => 0,
    'islandora:119' => 0,
    'islandora:354' => 0,
    'islandora:871' => 0,
    'islandora:809' => 0,
    'islandora:326' => 0,
    'islandora:512' => 0,
    'islandora:252' => 0,
    'islandora:372' => 0,
    'islandora:878' => 0,
    'islandora:266' => 0,
    'islandora:260' => 0,
    'islandora:579' => 0,
    'islandora:258' => 0,
    'islandora:BDC' => 0,
    'islandora:492' => 0,
    'islandora:270' => 0,
    'islandora:501' => 0,
    'islandora:323' => 0,
    'islandora:257' => 0,
    'islandora:307' => 0,
    'islandora:765' => 0,
    'islandora:135' => 0,
    'islandora:422' => 0,
    'islandora:771' => 0,
    'islandora:817' => 0,
    'islandora:264' => 0,
    'islandora:783' => 0,
    'islandora:496' => 0,
    'islandora:748' => 0,
    'islandora:851' => 0,
    'islandora:708' => 0,
    'islandora:286' => 0,
    'islandora:186' => 0,
    'islandora:514' => 0,
    'islandora:757' => 0,
    'islandora:504' => 0,
    'islandora:827' => 0,
    'islandora:314' => 0,
    'islandora:313' => 0,
    'islandora:367' => 0,
    'islandora:255' => 0,
    'islandora:345' => 0,
    'islandora:262' => 0,
    'islandora:170' => 0,
    'islandora:704' => 0,
    'islandora:589' => 0,
    'islandora:785' => 0,
    'islandora:850' => 0,
    'islandora:526' => 0,
    'islandora:167' => 0,
    'islandora:852' => 0,
    'islandora:556' => 0,
    'islandora:880' => 0,
    'islandora:420' => 0,
    'islandora:770' => 0,
    'islandora:808' => 0,
    'islandora:825' => 0,
    'islandora:717' => 0,
    'islandora:928' => 0,
    'islandora:819' => 0,
    'islandora:357' => 0,
    'islandora:071' => 0,
    'islandora:074' => 0,
    'islandora:069' => 0,
    'islandora:343' => 0,
    'islandora:874' => 0,
    'islandora:203' => 0,
    'islandora:315' => 0,
    'islandora:787' => 0,
    'islandora:294' => 0,
    'islandora:838' => 0,
    'islandora:366' => 0,
    'islandora:703' => 0,
    'islandora:753' => 0,
    'islandora:287' => 0,
    'islandora:788' => 0,
    'islandora:158' => 0,
    'islandora:542' => 0,
    'islandora:519' => 0,
    'islandora:312' => 0,
    'islandora:875' => 0,
    'islandora:383' => 0,
    'islandora:351' => 0,
    'islandora:800' => 0,
    'islandora:254' => 0,
    'islandora:253' => 0,
    'islandora:348' => 0,
    'islandora:844' => 0,
    'islandora:535' => 0,
    'islandora:359' => 0,
    'islandora:568' => 0,
    'islandora:859' => 0,
    'islandora:600' => 0,
    'islandora:773' => 0,
    'islandora:132' => 0,
    'islandora:511' => 0,
    'islandora:330' => 0,
    'islandora:376' => 0,
    'islandora:267' => 0,
    'islandora:127' => 0,
    'islandora:130' => 0,
    'islandora:325' => 0,
    'islandora:159' => 0,
    'islandora:756' => 0,
    'islandora:191' => 0,
    'islandora:550' => 0,
    'islandora:763' => 0,
    'islandora:201' => 0,
    'islandora:129' => 0,
    'islandora:279' => 0,
    'islandora:790' => 0,
    'islandora:777' => 0,
    'islandora:516' => 0,
    'islandora:269' => 0,
    'islandora:290' => 0,
    'islandora:190' => 0,
    'islandora:412' => 0,
    'islandora:282' => 0,
    'islandora:520' => 0,
    'islandora:157' => 0,
    'islandora:778' => 0,
    'islandora:318' => 0,
    'islandora:830' => 0,
    'islandora:841' => 0,
    'islandora:820' => 0,
    'islandora:317' => 0,
    'islandora:811' => 0,
    'islandora:864' => 0,
    'islandora:791' => 0,
    'islandora:103' => 0,
    'islandora:719' => 0,
    'islandora:569' => 0,
    'islandora:538' => 0,
    'islandora:333' => 0,
    'islandora:350' => 0,
    'islandora:173' => 0,
    'islandora:349' => 0,
    'islandora:352' => 0,
    'islandora:152' => 0,
    'islandora:497' => 0,
    'islandora:527' => 0,
    'islandora:562' => 0,
    'islandora:573' => 0,
    'islandora:581' => 0,
    'islandora:570' => 0,
    'islandora:138' => 0,
    'islandora:824' => 0,
    'islandora:848' => 0,
    'islandora:536' => 0,
    'islandora:517' => 0,
    'islandora:549' => 0,
    'islandora:068' => 0,
    'islandora:786' => 0,
    'islandora:789' => 0,
    'islandora:340' => 0,
    'islandora:204' => 0,
    'islandora:304' => 0,
    'islandora:509' => 0,
    'islandora:565' => 0,
    'islandora:833' => 0,
    'islandora:141' => 0,
    'islandora:576' => 0,
    'islandora:327' => 0,
    'islandora:558' => 0,
    'islandora:380' => 0,
    'islandora:798' => 0,
    'islandora:755' => 0,
    'islandora:701' => 0,
    'islandora:123' => 0,
    'islandora:182' => 0,
    'islandora:378' => 0,
    'islandora:107' => 0,
    'islandora:143' => 0,
    'islandora:369' => 0,
    'islandora:112' => 0,
    'islandora:272' => 0,
    'islandora:718' => 0,
    'islandora:338' => 0,
    'islandora:295' => 0,
    'islandora:featured_collection' => 0,
    'islandora:700' => 0,
    'islandora:764' => 0,
    'islandora:868' => 0,
    'islandora:358' => 0,
    'islandora:599' => 0,
    'islandora:767' => 0,
    'islandora:342' => 0,
    'islandora:142' => 0,
    'islandora:792' => 0,
    'islandora:766' => 0,
    'islandora:713' => 0,
    'islandora:283' => 0,
    'islandora:866' => 0,
    'islandora:265' => 0,
    'islandora:856' => 0,
    'islandora:821' => 0,
    'islandora:346' => 0,
    'islandora:498' => 0,
    'islandora:592' => 0,
    'islandora:840' => 0,
    'islandora:374' => 0,
    'islandora:145' => 0,
    'islandora:593' => 0,
    'islandora:174' => 0,
    'islandora:776' => 0,
    'islandora:148' => 0,
    'islandora:793' => 0,
    'islandora:869' => 0,
    'islandora:332' => 0,
    'islandora:574' => 0,
    'islandora:316' => 0,
    'islandora:815' => 0,
    'islandora:289' => 0,
    'islandora:370' => 0,
    'islandora:231' => 0,
    'islandora:133' => 0,
    'islandora:836' => 0,
    'islandora:706' => 0,
    'islandora:529' => 0,
    'islandora:751' => 0,
    'islandora:502' => 0,
    'islandora:163' => 0,
    'islandora:493' => 0,
    'islandora:571' => 0,
    'islandora:302' => 0,
    'islandora:202' => 0,
    'islandora:305' => 0,
    'islandora:278' => 0,
    'islandora:261' => 0,
    'islandora:842' => 0,
    'islandora:774' => 0,
    'islandora:499' => 0,
    'islandora:823' => 0,
    'islandora:780' => 0,
    'islandora:515' => 0,
    'islandora:HistoryMystery' => 0,
    'islandora:587' => 0,
    'islandora:857' => 0,
    'islandora:853' => 0,
    'islandora:339' => 0,
    'islandora:843' => 0,
    'islandora:721' => 0,
    'islandora:860' => 0,
    'islandora:125' => 0,
    'islandora:322' => 0,
    'islandora:102' => 0,
    'islandora:553' => 0,
    'islandora:277' => 0,
    'islandora:115' => 0,
    'islandora:537' => 0,
    'islandora:540' => 0,
    'islandora:271' => 0,
    'islandora:139' => 0,
    'islandora:334' => 0,
    'islandora:128' => 0,
    'islandora:591' => 0,
    'islandora:120' => 0,
    'islandora:273' => 0,
    'islandora:533' => 0,
    'islandora:595' => 0,
    'islandora:865' => 0,
    'islandora:782' => 0,
    'islandora:518' => 0,
    'islandora:584' => 0,
    'islandora:494' => 0,
    'islandora:707' => 0,
    'islandora:134' => 0,
    'islandora:818' => 0,
    'islandora:347' => 0,
    'islandora:381' => 0,
    'islandora:564' => 0,
    'islandora:720' => 0,
    'islandora:285' => 0,
    'islandora:560' => 0,
    'islandora:775' => 0,
    'islandora:510' => 0,
    'islandora:561' => 0,
    'islandora:114' => 0,
    'islandora:180' => 0,
    'islandora:361' => 0,
    'islandora:249' => 0,
    'islandora:829' => 0,
    'islandora:784' => 0,
    'islandora:690' => 0,
    'islandora:867' => 0,
    'islandora:151' => 0,
    'islandora:165' => 0,
    'islandora:554' => 0,
    'islandora:710' => 0,
    'islandora:394' => 0,
    'islandora:760' => 0,
    'islandora:602' => 0,
    'islandora:795' => 0,
    'islandora:545' => 0,
    'islandora:291' => 0,
    'islandora:796' => 0,
    'islandora:263' => 0,
    'islandora:379' => 0,
    'islandora:754' => 0,
    'islandora:503' => 0,
    'islandora:495' => 0,
    'islandora:122' => 0,
    'islandora:256' => 0,
    'islandora:156' => 0,
    'islandora:768' => 0,
    'islandora:136' => 0,
    'islandora:552' => 0,
    'islandora:311' => 0,
    'islandora:582' => 0,
    'islandora:702' => 0,
    'islandora:580' => 0,
    'islandora:711' => 0,
    'islandora:140' => 0,
    'islandora:715' => 0,
    'islandora:S' => 0,
    'islandora:301' => 0,
    'islandora:137' => 0,
    'islandora:144' => 0,
    'islandora:111' => 0,
    'islandora:250' => 0,
    'islandora:176' => 0,
    'islandora:992' => 0,
    'islandora:993' => 0,
    'islandora:296' => 0,
    'islandora:382' => 0,
    'islandora:297' => 0,
    'islandora:572' => 0,
    'islandora:153' => 0,
    'islandora:368' => 0,
    'islandora:872' => 0,
    'islandora:797' => 0,
    'islandora:522' => 0,
    'islandora:110' => 0,
    'islandora:371' => 0,
    'islandora:118' => 0,
    'islandora:121' => 0,
    'islandora:251' => 0,
    'islandora:329' => 0,
    'islandora:762' => 0,
    'islandora:714' => 0,
    'islandora:341' => 0,
    'islandora:816' => 0,
    'islandora:150' => 0,
    'islandora:716' => 0,
    'islandora:566' => 0,
    'islandora:275' => 0,
    'islandora:175' => 0,
    'islandora:310' => 0,
    'islandora:705' => 0,
    'islandora:106' => 0,
    'islandora:160' => 0,
    'islandora:230' => 0,
    'islandora:76850' => 0,
    'islandora:281' => 0,
    'islandora:555' => 0,
    'islandora:801' => 0,
    'islandora:583' => 0,
    'islandora:506' => 0,
    'islandora:854' => 0,
    'islandora:834' => 0,
    'islandora:161' => 0,
    'islandora:274' => 0,
    'islandora:113' => 0,
    'islandora:799' => 0,
    'islandora:298' => 0,
    'islandora:528' => 0,
    'islandora:855' => 0,
    'islandora:400' => 0,
    'islandora:832' => 0,
    'islandora:443' => 0,
    'islandora:575' => 0,
    'islandora:364' => 0,
    'islandora:337' => 0,
    'islandora:187' => 0,
    'islandora:308' => 0,
    'islandora:365' => 0,
    'islandora:181' => 0,
    'islandora:563' => 0,
    'islandora:309' => 0,
    'islandora:822' => 0,
    'islandora:831' => 0,
    'islandora:104' => 0,
    'islandora:578' => 0,
    'islandora:559' => 0,
    'islandora:324' => 0,
    'islandora:803' => 0,
    'islandora:863' => 0,
    'islandora:870' => 0,
    'islandora:177' => 0,
    'islandora:539' => 0,
    'islandora:491' => 0,
    'islandora:336' => 0,
    'islandora:879' => 0,
    'islandora:548' => 0,
    'islandora:826' => 0,
    'islandora:588' => 0,
    'islandora:802' => 0,
    'islandora:126' => 0,
    'islandora:557' => 0,
    'islandora:168' => 0,
    'islandora:761' => 0,
    'islandora:596' => 0,
    'islandora:601' => 0,
    'islandora:806' => 0,
    'islandora:306' => 0,
    'islandora:293' => 0,
    'islandora:604' => 0,
    'islandora:709' => 0,
    'islandora:807' => 0,
    'islandora:586' => 0,
    'islandora:603' => 0,
    'islandora:100' => 0,
    'islandora:613' => 0,
    'islandora:607' => 0,
    'islandora:608' => 0,
    'islandora:612' => 0,
    'islandora:614' => 0,
    'islandora:606' => 0,
    'islandora:628' => 0,
    'islandora:622' => 0,
    'islandora:626' => 0,
    'islandora:624' => 0,
    'islandora:621' => 0,
    'islandora:623' => 0,
    'islandora:619' => 0,
    'islandora:627' => 0,
    'islandora:615' => 0,
    'islandora:620' => 0,
    'islandora:618' => 0,
    'islandora:610' => 0,
    'islandora:616' => 0,
    'islandora:605' => 0,
    'islandora:617' => 0,
    'islandora:300' => 0,
    'islandora:998' => 0,
    'islandora:750' => 0,
    'islandora:321' => 0,
    'islandora:292' => 0,
    'islandora:116' => 0,
    'islandora:597' => 0,
    'islandora:74219' => 0,
    'islandora:577' => 0,
    'islandora:712' => 0,
    'islandora:109' => 0,
    'islandora:828' => 0,
    'islandora:594' => 0,
    'islandora:837' => 0,
    'islandora:873' => 0,
    'islandora:360' => 0,
    'islandora:331' => 0,
    'islandora:541' => 0,
    'islandora:810' => 0,
    'islandora:835' => 0,
    'islandora:543' => 0,
    'islandora:813' => 0,
    'islandora:421' => 0,
    'islandora:280' => 0,
    'islandora:525' => 0,
    'islandora:356' => 0,
    'islandora:544' => 0,
    'islandora:root' => 0,
    'islandora:812' => 0,
    'islandora:521' => 0,
    'islandora:353' => 0,
    'islandora:781' => 0,
    'islandora:373' => 0,
    'islandora:505' => 0,
    'islandora:UNASSIGNED' => 0,
    'islandora:524' => 0,
    'islandora:149' => 0,
    'islandora:259' => 0,
    'islandora:240' => 0,
    'islandora:VF' => 0,
    'islandora:849' => 0,
    'islandora:531' => 0,
    'islandora:375' => 0,
    'islandora:772' => 0,
    'islandora:999' => 0,
    'islandora:999R' => 0,
    'islandora:117' => 0,
    'islandora:590' => 0,
    'islandora:162' => 0,
    'islandora:124' => 0,
    'islandora:523' => 0,
    'islandora:164' => 0,
    'islandora:131' => 0,
    'islandora:377' => 0,
    'islandora:288' => 0,
    'islandora:355' => 0,
    'islandora:155' => 0,
    'islandora:846' => 0,
    'islandora:319' => 0,
    'islandora:268' => 0,
    'islandora:363' => 0,
    'islandora:108' => 0,
    'islandora:299' => 0,
    'islandora:284' => 0,
  );
  $export['islandora_collection_search_searchable_collections'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_compound_object_tn_deriv_hooks';
  $strongarm->value = 1;
  $export['islandora_compound_object_tn_deriv_hooks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_imagecache_cache_solr_backend_display';
  $strongarm->value = 1;
  $export['islandora_imagecache_cache_solr_backend_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_large_image_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_openseadragon' => 'islandora_openseadragon',
    ),
    'default' => 'islandora_openseadragon',
  );
  $export['islandora_large_image_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_show_print_option';
  $strongarm->value = 0;
  $export['islandora_show_print_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_collection_sort_block_override';
  $strongarm->value = 1;
  $export['islandora_solr_collection_sort_block_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_facet_pages_fields_data';
  $strongarm->value = array(
    0 => array(
      'solr_field' => 'mods_subject_topic_mt',
      'label' => 'Subject',
      'path' => 'compressed-search-subject',
    ),
    1 => array(
      'solr_field' => 'bpl_mods_all_call_numbers_est',
      'label' => 'Call Number',
      'path' => 'compressed-search-call-number',
    ),
    2 => array(
      'solr_field' => 'author donor alias',
      'label' => 'Author / Donor',
      'path' => 'compressed-search-author-donor',
    ),
    3 => array(
      'solr_field' => 'mods_titleInfo_title_mt',
      'label' => 'Title',
      'path' => 'compressed-search-title',
    ),
  );
  $export['islandora_solr_facet_pages_fields_data'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_primary_display';
  $strongarm->value = 'default';
  $export['islandora_solr_primary_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_primary_display_table';
  $strongarm->value = array(
    'weight' => array(
      'bookmark' => '0',
      'default' => '0',
      'grid' => '0',
      'table' => '0',
    ),
    'default' => 'default',
    'enabled' => array(
      'grid' => 'grid',
      'bookmark' => 0,
      'default' => 'default',
      'table' => 0,
    ),
  );
  $export['islandora_solr_primary_display_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_search_navigation';
  $strongarm->value = 1;
  $export['islandora_solr_search_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_secondary_display';
  $strongarm->value = array(
    'csv' => 'csv',
    'rss' => 'rss',
  );
  $export['islandora_solr_secondary_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_video_make_archive';
  $strongarm->value = 0;
  $export['islandora_video_make_archive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_file_supported_fields';
  $strongarm->value = 'file, image';
  $export['node_export_file_supported_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_image_block';
  $strongarm->value = 1;
  $export['node_export_reset_changed_image_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_default';
  $strongarm->value = '0';
  $export['owlcarousel_auto_play_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_featured-collection-single';
  $strongarm->value = '0';
  $export['owlcarousel_auto_play_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = '0';
  $export['owlcarousel_auto_play_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_default';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_desktop_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_default_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_featured-collection-single_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_desktop_owlcarousel_settings_featured-collection-single_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_featured-collection-single_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_featured-collection-single_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_owl-carousel-explore_items';
  $strongarm->value = '4';
  $export['owlcarousel_items_desktop_owlcarousel_settings_owl-carousel-explore_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_owl-carousel-explore_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_owl-carousel-explore_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_default_width';
  $strongarm->value = '999';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_featured-collection-single_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_featured-collection-single_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_featured-collection-single_width';
  $strongarm->value = '999';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_featured-collection-single_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_owl-carousel-explore_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_owl-carousel-explore_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_owl-carousel-explore_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_owl-carousel-explore_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_default_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_featured-collection-single_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_featured-collection-single_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_featured-collection-single_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_featured-collection-single_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_owl-carousel-explore_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_owl-carousel-explore_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_owl-carousel-explore_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_owl-carousel-explore_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_default';
  $strongarm->value = '1';
  $export['owlcarousel_items_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_featured-collection-single';
  $strongarm->value = '5';
  $export['owlcarousel_items_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = '5';
  $export['owlcarousel_items_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_tablet_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_default_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_featured-collection-single_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_owlcarousel_settings_featured-collection-single_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_featured-collection-single_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_featured-collection-single_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_owl-carousel-explore_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_owlcarousel_settings_owl-carousel-explore_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_owl-carousel-explore_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_owl-carousel-explore_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_default_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_featured-collection-single_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_featured-collection-single_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_featured-collection-single_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_featured-collection-single_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_owl-carousel-explore_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_owl-carousel-explore_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_owl-carousel-explore_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_owl-carousel-explore_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_featured-collection-single';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_featured-collection-single';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_default';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_load_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_default';
  $strongarm->value = array(
    0 => '<i class=\'icon-left-big\'></i>',
    1 => '<i class=\'icon-right-big\'></i>',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_featured-collection-single';
  $strongarm->value = array(
    0 => '<i class=\'icon-left-open-big\'></i>',
    1 => '<i class=\'icon-right-open-big\'></i>',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = array(
    0 => '<i class=\'icon-left-open-big\'></i>',
    1 => '<i class=\'icon-right-open-big\'></i>',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_default';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_featured-collection-single';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_default';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_default';
  $strongarm->value = '100';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_featured-collection-single';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_default';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_featured-collection-single';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_default';
  $strongarm->value = 'owlcarousel_default';
  $export['owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_featured-collection-single';
  $strongarm->value = 'Featured Collection Single';
  $export['owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 'Owl Carousel Explore';
  $export['owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_single_item_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 1;
  $export['owlcarousel_single_item_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_default';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_featured-collection-single';
  $strongarm->value = '0';
  $export['owlcarousel_slide_speed_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 0;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 0;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_default';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_featured-collection-single';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_default';
  $strongarm->value = 'goDown';
  $export['owlcarousel_transition_style_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_featured-collection-single';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_featured-collection-single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_owl-carousel-explore';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_owl-carousel-explore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_ignore_admin';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_ignore_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_close_size';
  $strongarm->value = '18px';
  $export['responsive_menus_mean_menu_close_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_close_txt';
  $strongarm->value = 'X';
  $export['responsive_menus_mean_menu_close_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_container';
  $strongarm->value = 'body';
  $export['responsive_menus_mean_menu_container'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_contract_txt';
  $strongarm->value = '-';
  $export['responsive_menus_mean_menu_contract_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_css_selectors';
  $strongarm->value = '#block-menu-menu-header-menu';
  $export['responsive_menus_mean_menu_css_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_expand_children';
  $strongarm->value = '1';
  $export['responsive_menus_mean_menu_expand_children'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_expand_txt';
  $strongarm->value = '+';
  $export['responsive_menus_mean_menu_expand_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_media_size';
  $strongarm->value = '666';
  $export['responsive_menus_mean_menu_media_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_position';
  $strongarm->value = 'right';
  $export['responsive_menus_mean_menu_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_remove_attrs';
  $strongarm->value = '1';
  $export['responsive_menus_mean_menu_remove_attrs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_show_children';
  $strongarm->value = '1';
  $export['responsive_menus_mean_menu_show_children'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_trigger_txt';
  $strongarm->value = '<span /><span /><span />';
  $export['responsive_menus_mean_menu_trigger_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_no_jquery_update';
  $strongarm->value = array(
    1 => 0,
  );
  $export['responsive_menus_no_jquery_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_style';
  $strongarm->value = 'mean_menu';
  $export['responsive_menus_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'front';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Carnegie Library for Local History';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = '';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_boulder_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 0,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_meta' => array(
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 0,
    'boulder_theme_logo_link' => 'https://boulderlibrary.org/',
  );
  $export['theme_boulder_theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'boulder_theme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_ir7_saas_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 1,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_meta' => array(
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 0,
    'ir7_saas_background_dsid' => 'OBJ',
    'designkit_color' => array(
      'background' => '#E2E2E2',
      'header' => '#E2E2E2',
      'content' => '#ffffff',
      'navigation' => '#E2E2E2',
      'footer' => '#E2E2E2',
      'sidebars' => '#ffffff',
    ),
  );
  $export['theme_ir7_saas_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'designkit_color' => array(
      'background' => '',
      'header' => '#ffffff',
      'content' => '#ffffff',
      'navigation' => '#ffffff',
      'footer' => '#ffffff',
      'sidebars' => '#ffffff',
    ),
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
