<?php
/**
 * @file
 * platform_main_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function platform_main_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-american-school-for-the-dea.
  $menus['menu-american-school-for-the-dea'] = array(
    'menu_name' => 'menu-american-school-for-the-dea',
    'title' => 'American School for the Deaf Context Menu',
    'description' => '',
  );
  // Exported menu: menu-asd-social-media.
  $menus['menu-asd-social-media'] = array(
    'menu_name' => 'menu-asd-social-media',
    'title' => 'American School for the Deaf Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-avon-free-public-library-co.
  $menus['menu-avon-free-public-library-co'] = array(
    'menu_name' => 'menu-avon-free-public-library-co',
    'title' => 'Avon Free Public Library Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-avon-free-public-library-so.
  $menus['menu-avon-free-public-library-so'] = array(
    'menu_name' => 'menu-avon-free-public-library-so',
    'title' => 'Avon Free Public Library Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-barnum-museum-contextual-me.
  $menus['menu-barnum-museum-contextual-me'] = array(
    'menu_name' => 'menu-barnum-museum-contextual-me',
    'title' => 'Barnum Museum Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-barnum-museum-social-media.
  $menus['menu-barnum-museum-social-media'] = array(
    'menu_name' => 'menu-barnum-museum-social-media',
    'title' => 'Barnum Museum Social Media',
    'description' => '',
  );
  // Exported menu: menu-bethel-public-library-conte.
  $menus['menu-bethel-public-library-conte'] = array(
    'menu_name' => 'menu-bethel-public-library-conte',
    'title' => 'Bethel Public Library Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-bethel-public-library-socia.
  $menus['menu-bethel-public-library-socia'] = array(
    'menu_name' => 'menu-bethel-public-library-socia',
    'title' => 'Bethel Public Library Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-bibliomation-contextual-men.
  $menus['menu-bibliomation-contextual-men'] = array(
    'menu_name' => 'menu-bibliomation-contextual-men',
    'title' => 'Bibliomation Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-bibliomation-social-media-m.
  $menus['menu-bibliomation-social-media-m'] = array(
    'menu_name' => 'menu-bibliomation-social-media-m',
    'title' => 'Bibliomation Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-bill-memorial-library-conte.
  $menus['menu-bill-memorial-library-conte'] = array(
    'menu_name' => 'menu-bill-memorial-library-conte',
    'title' => 'Bill Memorial Library Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-bill-memorial-library-socia.
  $menus['menu-bill-memorial-library-socia'] = array(
    'menu_name' => 'menu-bill-memorial-library-socia',
    'title' => 'Bill Memorial Library Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-bridgeport-history-center-c.
  $menus['menu-bridgeport-history-center-c'] = array(
    'menu_name' => 'menu-bridgeport-history-center-c',
    'title' => 'Bridgeport History Center Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-browse-content.
  $menus['menu-browse-content'] = array(
    'menu_name' => 'menu-browse-content',
    'title' => 'CTDA Collections',
    'description' => '',
  );
  // Exported menu: menu-cahsl-contextual-menu.
  $menus['menu-cahsl-contextual-menu'] = array(
    'menu_name' => 'menu-cahsl-contextual-menu',
    'title' => 'CAHSL Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-cahsl-social-media-menu.
  $menus['menu-cahsl-social-media-menu'] = array(
    'menu_name' => 'menu-cahsl-social-media-menu',
    'title' => 'CAHSL Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-case-memorial-library-conte.
  $menus['menu-case-memorial-library-conte'] = array(
    'menu_name' => 'menu-case-memorial-library-conte',
    'title' => 'Case Memorial Library Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-case-memorial-library-socia.
  $menus['menu-case-memorial-library-socia'] = array(
    'menu_name' => 'menu-case-memorial-library-socia',
    'title' => 'Case Memorial Library Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-chi-contextual-menu.
  $menus['menu-chi-contextual-menu'] = array(
    'menu_name' => 'menu-chi-contextual-menu',
    'title' => 'CHI Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-chs-contextual-menu.
  $menus['menu-chs-contextual-menu'] = array(
    'menu_name' => 'menu-chs-contextual-menu',
    'title' => 'CHS Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-chs-social-media-menu.
  $menus['menu-chs-social-media-menu'] = array(
    'menu_name' => 'menu-chs-social-media-menu',
    'title' => 'CHS Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-connecticut-college-context.
  $menus['menu-connecticut-college-context'] = array(
    'menu_name' => 'menu-connecticut-college-context',
    'title' => 'Connecticut College Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-connecticut-college-social-.
  $menus['menu-connecticut-college-social-'] = array(
    'menu_name' => 'menu-connecticut-college-social-',
    'title' => 'Connecticut College Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-connecticut-landmarks-conte.
  $menus['menu-connecticut-landmarks-conte'] = array(
    'menu_name' => 'menu-connecticut-landmarks-conte',
    'title' => 'Connecticut Landmarks Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-connecticut-landmarks-socia.
  $menus['menu-connecticut-landmarks-socia'] = array(
    'menu_name' => 'menu-connecticut-landmarks-socia',
    'title' => 'Connecticut Landmarks Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-connecticut-state-library-c.
  $menus['menu-connecticut-state-library-c'] = array(
    'menu_name' => 'menu-connecticut-state-library-c',
    'title' => 'Connecticut State Library Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-connecticut-state-library-s.
  $menus['menu-connecticut-state-library-s'] = array(
    'menu_name' => 'menu-connecticut-state-library-s',
    'title' => 'Connecticut State Library Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-connecticut-state-museum-of.
  $menus['menu-connecticut-state-museum-of'] = array(
    'menu_name' => 'menu-connecticut-state-museum-of',
    'title' => 'Connecticut State Museum of Natural History Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-csl-contextual-menu.
  $menus['menu-csl-contextual-menu'] = array(
    'menu_name' => 'menu-csl-contextual-menu',
    'title' => 'CSL Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-csmnh-contextual-menu.
  $menus['menu-csmnh-contextual-menu'] = array(
    'menu_name' => 'menu-csmnh-contextual-menu',
    'title' => 'Connecticut State Museum of Natural History Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-digital-collection-social-m.
  $menus['menu-digital-collection-social-m'] = array(
    'menu_name' => 'menu-digital-collection-social-m',
    'title' => 'Digital Collection Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-enfield-public-library-cont.
  $menus['menu-enfield-public-library-cont'] = array(
    'menu_name' => 'menu-enfield-public-library-cont',
    'title' => 'Enfield Public Library Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-enfield-public-library-soci.
  $menus['menu-enfield-public-library-soci'] = array(
    'menu_name' => 'menu-enfield-public-library-soci',
    'title' => 'Enfield Public Library Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-fairfield-museum-contextual.
  $menus['menu-fairfield-museum-contextual'] = array(
    'menu_name' => 'menu-fairfield-museum-contextual',
    'title' => 'Fairfield Museum and History Center Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-fairfield-museum-social-med.
  $menus['menu-fairfield-museum-social-med'] = array(
    'menu_name' => 'menu-fairfield-museum-social-med',
    'title' => 'Fairfield Museum and History Center Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-florence-griswold-museum-co.
  $menus['menu-florence-griswold-museum-co'] = array(
    'menu_name' => 'menu-florence-griswold-museum-co',
    'title' => 'Florence Griswold Museum Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-florence-griswold-museum-so.
  $menus['menu-florence-griswold-museum-so'] = array(
    'menu_name' => 'menu-florence-griswold-museum-so',
    'title' => 'Florence Griswold Museum Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-groton-public-library-conte.
  $menus['menu-groton-public-library-conte'] = array(
    'menu_name' => 'menu-groton-public-library-conte',
    'title' => 'Groton Public Library Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-groton-public-library-socia.
  $menus['menu-groton-public-library-socia'] = array(
    'menu_name' => 'menu-groton-public-library-socia',
    'title' => 'Groton Public Library Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-hagaman-memorial-library-co.
  $menus['menu-hagaman-memorial-library-co'] = array(
    'menu_name' => 'menu-hagaman-memorial-library-co',
    'title' => 'Hagaman Memorial Library Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-hagaman-memorial-library-so.
  $menus['menu-hagaman-memorial-library-so'] = array(
    'menu_name' => 'menu-hagaman-memorial-library-so',
    'title' => 'Hagaman Memorial Library Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-hartford-medical-society-co.
  $menus['menu-hartford-medical-society-co'] = array(
    'menu_name' => 'menu-hartford-medical-society-co',
    'title' => 'Hartford Medical Society Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-hartford-medical-society-so.
  $menus['menu-hartford-medical-society-so'] = array(
    'menu_name' => 'menu-hartford-medical-society-so',
    'title' => 'Hartford Medical Society Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-hartford-public-library-men.
  $menus['menu-hartford-public-library-men'] = array(
    'menu_name' => 'menu-hartford-public-library-men',
    'title' => 'Hartford Public Library Menu',
    'description' => '',
  );
  // Exported menu: menu-hartford-public-library-soc.
  $menus['menu-hartford-public-library-soc'] = array(
    'menu_name' => 'menu-hartford-public-library-soc',
    'title' => 'Hartford Public Library Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-ivoryton-library-contextual.
  $menus['menu-ivoryton-library-contextual'] = array(
    'menu_name' => 'menu-ivoryton-library-contextual',
    'title' => 'Ivoryton Library Association Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-ivoryton-library-social-med.
  $menus['menu-ivoryton-library-social-med'] = array(
    'menu_name' => 'menu-ivoryton-library-social-med',
    'title' => 'Ivoryton Library Association Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-kent-memorial-library-conte.
  $menus['menu-kent-memorial-library-conte'] = array(
    'menu_name' => 'menu-kent-memorial-library-conte',
    'title' => 'Kent Memorial Library Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-kent-memorial-library-socia.
  $menus['menu-kent-memorial-library-socia'] = array(
    'menu_name' => 'menu-kent-memorial-library-socia',
    'title' => 'Kent Memorial Library Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-litchfield-historical-conte.
  $menus['menu-litchfield-historical-conte'] = array(
    'menu_name' => 'menu-litchfield-historical-conte',
    'title' => 'Litchfield Historical Society Contextual Menus',
    'description' => '',
  );
  // Exported menu: menu-litchfield-historical-socia.
  $menus['menu-litchfield-historical-socia'] = array(
    'menu_name' => 'menu-litchfield-historical-socia',
    'title' => 'Litchfield Historical Society Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-lyman-allyn-art-museum-soci.
  $menus['menu-lyman-allyn-art-museum-soci'] = array(
    'menu_name' => 'menu-lyman-allyn-art-museum-soci',
    'title' => 'Lyman Allyn Art Museum Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-lymen-allyn-art-museum-cont.
  $menus['menu-lymen-allyn-art-museum-cont'] = array(
    'menu_name' => 'menu-lymen-allyn-art-museum-cont',
    'title' => 'Lyman Allyn Art Museum Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-mattatuck-museum-contextual.
  $menus['menu-mattatuck-museum-contextual'] = array(
    'menu_name' => 'menu-mattatuck-museum-contextual',
    'title' => 'Mattatuck Museum Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-mattatuck-museum-social-med.
  $menus['menu-mattatuck-museum-social-med'] = array(
    'menu_name' => 'menu-mattatuck-museum-social-med',
    'title' => 'Mattatuck Museum Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-mystic-arts-center-contextu.
  $menus['menu-mystic-arts-center-contextu'] = array(
    'menu_name' => 'menu-mystic-arts-center-contextu',
    'title' => 'Mystic Arts Center Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-mystic-arts-center-social-m.
  $menus['menu-mystic-arts-center-social-m'] = array(
    'menu_name' => 'menu-mystic-arts-center-social-m',
    'title' => 'Mystic Arts Center Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-mystic-seaport-contextual-m.
  $menus['menu-mystic-seaport-contextual-m'] = array(
    'menu_name' => 'menu-mystic-seaport-contextual-m',
    'title' => 'Mystic Seaport Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-mystic-seaport-social-media.
  $menus['menu-mystic-seaport-social-media'] = array(
    'menu_name' => 'menu-mystic-seaport-social-media',
    'title' => 'Mystic Seaport Social Media Museum',
    'description' => '',
  );
  // Exported menu: menu-nbmaa-social-media-menu.
  $menus['menu-nbmaa-social-media-menu'] = array(
    'menu_name' => 'menu-nbmaa-social-media-menu',
    'title' => 'NBMAA Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-new-britain-museum-of-ameri.
  $menus['menu-new-britain-museum-of-ameri'] = array(
    'menu_name' => 'menu-new-britain-museum-of-ameri',
    'title' => 'NBMAA Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-new-haven-museum-contextual.
  $menus['menu-new-haven-museum-contextual'] = array(
    'menu_name' => 'menu-new-haven-museum-contextual',
    'title' => 'New Haven Museum Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-new-haven-museum-social-med.
  $menus['menu-new-haven-museum-social-med'] = array(
    'menu_name' => 'menu-new-haven-museum-social-med',
    'title' => 'New Haven Museum Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-norwalk-public-library-cont.
  $menus['menu-norwalk-public-library-cont'] = array(
    'menu_name' => 'menu-norwalk-public-library-cont',
    'title' => 'Norwalk Public Library Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-norwalk-public-library-soci.
  $menus['menu-norwalk-public-library-soci'] = array(
    'menu_name' => 'menu-norwalk-public-library-soci',
    'title' => 'Norwalk Public Library Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-pt-barnum-digital-collectio.
  $menus['menu-pt-barnum-digital-collectio'] = array(
    'menu_name' => 'menu-pt-barnum-digital-collectio',
    'title' => 'PT Barnum Digital Collection Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-slater-memorial-museum-cont.
  $menus['menu-slater-memorial-museum-cont'] = array(
    'menu_name' => 'menu-slater-memorial-museum-cont',
    'title' => 'Slater Memorial Museum Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-slater-memorial-museum-soci.
  $menus['menu-slater-memorial-museum-soci'] = array(
    'menu_name' => 'menu-slater-memorial-museum-soci',
    'title' => 'Slater Memorial Museum Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-stonington-historical-conte.
  $menus['menu-stonington-historical-conte'] = array(
    'menu_name' => 'menu-stonington-historical-conte',
    'title' => 'Stonington Historical Society Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-stonington-historical-socie.
  $menus['menu-stonington-historical-socie'] = array(
    'menu_name' => 'menu-stonington-historical-socie',
    'title' => 'Stonington Historical Society Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-uconn-contextual-menu.
  $menus['menu-uconn-contextual-menu'] = array(
    'menu_name' => 'menu-uconn-contextual-menu',
    'title' => 'UConn Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-uconn-social-media-menu.
  $menus['menu-uconn-social-media-menu'] = array(
    'menu_name' => 'menu-uconn-social-media-menu',
    'title' => 'UConn Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-wadsworth-atheneum-contextu.
  $menus['menu-wadsworth-atheneum-contextu'] = array(
    'menu_name' => 'menu-wadsworth-atheneum-contextu',
    'title' => 'Wadsworth Atheneum Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-wadsworth-atheneum-social-m.
  $menus['menu-wadsworth-atheneum-social-m'] = array(
    'menu_name' => 'menu-wadsworth-atheneum-social-m',
    'title' => 'Wadsworth Atheneum Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-windham-textile-history-con.
  $menus['menu-windham-textile-history-con'] = array(
    'menu_name' => 'menu-windham-textile-history-con',
    'title' => 'Windham Textile & History Museum Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-woodbury-public-library-con.
  $menus['menu-woodbury-public-library-con'] = array(
    'menu_name' => 'menu-woodbury-public-library-con',
    'title' => 'Woodbury Public Library Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-woodbury-public-library-soc.
  $menus['menu-woodbury-public-library-soc'] = array(
    'menu_name' => 'menu-woodbury-public-library-soc',
    'title' => 'Woodbury Public Library Social Media Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('American School for the Deaf Context Menu');
  t('American School for the Deaf Social Media Menu');
  t('Avon Free Public Library Contextual Menu');
  t('Avon Free Public Library Social Media Menu');
  t('Barnum Museum Contextual Menu');
  t('Barnum Museum Social Media');
  t('Bethel Public Library Contextual Menu');
  t('Bethel Public Library Social Media Menu');
  t('Bibliomation Contextual Menu');
  t('Bibliomation Social Media Menu');
  t('Bill Memorial Library Contextual Menu');
  t('Bill Memorial Library Social Media Menu');
  t('Bridgeport History Center Contextual Menu');
  t('CAHSL Contextual Menu');
  t('CAHSL Social Media Menu');
  t('CHI Contextual Menu');
  t('CHS Contextual Menu');
  t('CHS Social Media Menu');
  t('CSL Contextual Menu');
  t('CTDA Collections');
  t('Case Memorial Library Contextual Menu');
  t('Case Memorial Library Social Media Menu');
  t('Connecticut College Contextual Menu');
  t('Connecticut College Social Media Menu');
  t('Connecticut Landmarks Contextual Menu');
  t('Connecticut Landmarks Social Media Menu');
  t('Connecticut State Library Contextual Menu');
  t('Connecticut State Library Social Media Menu');
  t('Connecticut State Museum of Natural History Contextual Menu');
  t('Connecticut State Museum of Natural History Social Media Menu');
  t('Digital Collection Social Media Menu');
  t('Enfield Public Library Contextual Menu');
  t('Enfield Public Library Social Media Menu');
  t('Fairfield Museum and History Center Contextual Menu');
  t('Fairfield Museum and History Center Social Media Menu');
  t('Florence Griswold Museum Contextual Menu');
  t('Florence Griswold Museum Social Media Menu');
  t('Groton Public Library Contextual Menu');
  t('Groton Public Library Social Media Menu');
  t('Hagaman Memorial Library Contextual Menu');
  t('Hagaman Memorial Library Social Media Menu');
  t('Hartford Medical Society Contextual Menu');
  t('Hartford Medical Society Social Media Menu');
  t('Hartford Public Library Menu');
  t('Hartford Public Library Social Media Menu');
  t('Ivoryton Library Association Contextual Menu');
  t('Ivoryton Library Association Social Media Menu');
  t('Kent Memorial Library Contextual Menu');
  t('Kent Memorial Library Social Media Menu');
  t('Litchfield Historical Society Contextual Menus');
  t('Litchfield Historical Society Social Media Menu');
  t('Lyman Allyn Art Museum Contextual Menu');
  t('Lyman Allyn Art Museum Social Media Menu');
  t('Main menu');
  t('Management');
  t('Mattatuck Museum Contextual Menu');
  t('Mattatuck Museum Social Media Menu');
  t('Mystic Arts Center Contextual Menu');
  t('Mystic Arts Center Social Media Menu');
  t('Mystic Seaport Contextual Menu');
  t('Mystic Seaport Social Media Museum');
  t('NBMAA Contextual Menu');
  t('NBMAA Social Media Menu');
  t('New Haven Museum Contextual Menu');
  t('New Haven Museum Social Media Menu');
  t('Norwalk Public Library Contextual Menu');
  t('Norwalk Public Library Social Media Menu');
  t('PT Barnum Digital Collection Contextual Menu');
  t('Slater Memorial Museum Contextual Menu');
  t('Slater Memorial Museum Social Media Menu');
  t('Stonington Historical Society Contextual Menu');
  t('Stonington Historical Society Social Media Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('UConn Contextual Menu');
  t('UConn Social Media Menu');
  t('Wadsworth Atheneum Contextual Menu');
  t('Wadsworth Atheneum Social Media Menu');
  t('Windham Textile & History Museum Contextual Menu');
  t('Woodbury Public Library Contextual Menu');
  t('Woodbury Public Library Social Media Menu');

  return $menus;
}
