<?php
/**
 * @file
 * platform_main_feature.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function platform_main_feature_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lipsum\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lipsum</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'Creative content license\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-footer-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/1\',
        \'alias\' => \'cc-license\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Creative Content License\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'09648dae-14d6-46fe-82cd-cf4c0739201d\',
      \'vid\' => NULL,
      \'vuuid\' => \'eeef4363-12b5-4589-90fb-d4807789f042\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_content_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora:collectionCModel\',
          ),
        ),
      ),
      \'field_pid_replacement_procedure\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora:audio_collection\',
            \'format\' => NULL,
            \'safe_value\' => \'islandora:audio_collection\',
          ),
        ),
      ),
      \'field_replacement_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'4\',
            \'uid\' => \'1\',
            \'filename\' => \'audio-file.png\',
            \'uri\' => \'public://audio-file.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'3644\',
            \'status\' => \'1\',
            \'timestamp\' => \'1509987948\',
            \'uuid\' => \'dea84dfa-96d7-4e71-9b04-a17be781d2d5\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
          ),
        ),
      ),
      \'field_replacement_procedure\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Audio Collection Thumbnail\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'imagecache_default_thumbnail\',
      \'uid\' => \'1\',
      \'uuid\' => \'0f648492-b208-4668-a57a-211085d0069e\',
      \'vid\' => NULL,
      \'vuuid\' => \'1f605ddc-3349-4608-9d5e-f0fef4a8c565\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lipsum\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lipsum</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'Researchers\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-footer-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/2\',
        \'alias\' => \'researchers\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Researchers\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'11ab3414-deb5-4985-9797-1a90ac057005\',
      \'vid\' => NULL,
      \'vuuid\' => \'103a306d-27b0-4e0b-84ec-67d13c0397e3\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image_block\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Award Winning Open Source\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'15310bdf-5e1b-408b-8a7b-19ae5569eabd\',
      \'vid\' => NULL,
      \'vuuid\' => \'1e26a683-a08d-4655-8907-c793c08bf24e\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "discoverygarden inc.\\r\\n\\r\\nSims Office Suites Building | 3rd Floor\\r\\n\\r\\n118 Sydney Street, Charlottetown, PE\\r\\n\\r\\nPhone: 902.367.3851\\r\\n\\r\\nEmail: info@discoverygarden.ca\\r\\n\\r\\nWeb: discoverygarden.ca",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>discoverygarden inc.</p>\\n<p>Sims Office Suites Building | 3rd Floor</p>\\n<p>118 Sydney Street, Charlottetown, PE</p>\\n<p>Phone: 902.367.3851</p>\\n<p>Email: <a href=\\"mailto:info@discoverygarden.ca\\">info@discoverygarden.ca</a></p>\\n<p>Web: discoverygarden.ca</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'Make contact\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-footer-menu\',
        \'weight\' => \'-47\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/4\',
        \'alias\' => \'make-contact\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Contact\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'329a2134-140a-4447-a59f-389948bef2ba\',
      \'vid\' => NULL,
      \'vuuid\' => \'1a184baf-0988-4fa7-b1f4-ac0b1a39b4c8\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "The discoverygarden platform leverages the flexibility of Islandora, an open source digital asset management system; supporting a variety of file formats including PDF, TIFF, JPEG, and various audio and video file formats through the standard Islandora Solution Packs.  \\r\\n\\r\\nThe platform is fully hosted providing customers with automated software updates. The platform can be purchased based on the amount of cloud storage needed. \\r\\n\\r\\nThe discoverygarden platform will include access to monthly training, a web-based knowledge center that will include frequently asked questions and other tools to aid in platform management, in addition discoverygarden intends to provide instant messaging support through the knowledge center for customers who require assistance. Monthly support packages are available in addition to the other support-style services included with the platform. \\r\\n\\r\\nThe discoverygarden platform can be used to safeguard, preserve, and make accessible any content including special collections, archives, administrative documents, and traditional institutional repository content such as theses or dissertations. \\r\\nThe discoverygarden platform includes the scholar module, a suite of features focused on creating an easy to use and engaging institutional repository.  It addresses the need to encourage greater usage of institutional repositories by including numerous export and citation styles, as well as enhanced options to import publications using identifiers such as DOI and PMID. For administrators, a rights management feature allows clients to restrict and provide access to citations as necessary. The discoverygarden platform also provides statistics and reporting features, giving clients a better understanding of usage.\\r\\n\\r\\nHere is a list of the new features included in the discoverygarden platform: \\r\\n\\r\\n<ul>\\r\\n<li>Three standard theme options</li>\\r\\n<li>Rights management through our embargo module</li>\\r\\n<li>CiteProc and Citation Style Language (CSL) modules</li>\\r\\n<li>RoMEO, Zotero, and Bibutils Integration</li>\\r\\n<li>Citation Batch Importing for DOI, EndNote XML, PubMed ID, and RIS formats </li>\\r\\n<li>Citation Bookmarking and Batch Export</li>\\r\\n<li>Compliant with the Open Archives Initiative</li>\\r\\n<li>Able to integrate with Google Scholar</li>\\r\\n</ul>\\r\\n\\r\\ndiscoverygarden aims to facilitate continuous improvement of the hosted product by encouraging clients to collaborate in the future development decision-making process. Additional services are available to customers based on discoverygarden’s standard professional services rates. They include: \\r\\n<ul>\\r\\n<li>Consulting services </li>\\r\\n<li>Custom website theme</li>\\r\\n<li>Advanced training</li>\\r\\n<li>Data migration </li>\\r\\n<li>Metadata mapping</li>\\r\\n</ul>\\r\\n\\r\\nContact us today to get your own hosted discoverygarden platform. \\r\\n \\r\\n\\r\\n ",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The discoverygarden platform leverages the flexibility of Islandora, an open source digital asset management system; supporting a variety of file formats including PDF, TIFF, JPEG, and various audio and video file formats through the standard Islandora Solution Packs.  </p>\\n<p>The platform is fully hosted providing customers with automated software updates. The platform can be purchased based on the amount of cloud storage needed. </p>\\n<p>The discoverygarden platform will include access to monthly training, a web-based knowledge center that will include frequently asked questions and other tools to aid in platform management, in addition discoverygarden intends to provide instant messaging support through the knowledge center for customers who require assistance. Monthly support packages are available in addition to the other support-style services included with the platform. </p>\\n<p>The discoverygarden platform can be used to safeguard, preserve, and make accessible any content including special collections, archives, administrative documents, and traditional institutional repository content such as theses or dissertations.<br />\\nThe discoverygarden platform includes the scholar module, a suite of features focused on creating an easy to use and engaging institutional repository.  It addresses the need to encourage greater usage of institutional repositories by including numerous export and citation styles, as well as enhanced options to import publications using identifiers such as DOI and PMID. For administrators, a rights management feature allows clients to restrict and provide access to citations as necessary. The discoverygarden platform also provides statistics and reporting features, giving clients a better understanding of usage.</p>\\n<p>Here is a list of the new features included in the discoverygarden platform: </p>\\n<ul><li>Three standard theme options</li>\\n<li>Rights management through our embargo module</li>\\n<li>CiteProc and Citation Style Language (CSL) modules</li>\\n<li>RoMEO, Zotero, and Bibutils Integration</li>\\n<li>Citation Batch Importing for DOI, EndNote XML, PubMed ID, and RIS formats </li>\\n<li>Citation Bookmarking and Batch Export</li>\\n<li>Compliant with the Open Archives Initiative</li>\\n<li>Able to integrate with Google Scholar</li>\\n</ul><p>discoverygarden aims to facilitate continuous improvement of the hosted product by encouraging clients to collaborate in the future development decision-making process. Additional services are available to customers based on discoverygarden’s standard professional services rates. They include: </p>\\n<ul><li>Consulting services </li>\\n<li>Custom website theme</li>\\n<li>Advanced training</li>\\n<li>Data migration </li>\\n<li>Metadata mapping</li>\\n</ul><p>Contact us today to get your own hosted discoverygarden platform.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'About this site\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-header-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'1\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/5\',
        \'alias\' => \'about\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'About\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'3dfbfeaf-cb77-4ac0-b16f-145af17649b5\',
      \'vid\' => NULL,
      \'vuuid\' => \'97667383-3f6c-4db7-a93c-c5112ae72e99\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_content_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora:transformCModel\',
          ),
        ),
      ),
      \'field_pid_replacement_procedure\' => array(),
      \'field_replacement_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'3\',
            \'uid\' => \'1\',
            \'filename\' => \'folderopened_yellow.png\',
            \'uri\' => \'public://folderopened_yellow_0.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'9321\',
            \'status\' => \'1\',
            \'timestamp\' => \'1509987948\',
            \'uuid\' => \'96baf7c3-f553-45cc-8226-40ae1ab15804\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
          ),
        ),
      ),
      \'field_replacement_procedure\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Transform content model\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'imagecache_default_thumbnail\',
      \'uid\' => \'1\',
      \'uuid\' => \'3f04a4ce-6f3b-437d-b3d9-b8af461832d4\',
      \'vid\' => NULL,
      \'vuuid\' => \'3f7eeb4b-fd67-4d22-a208-c6fc4821743d\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Search the Repo\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'6790d072-e293-4a54-aa4e-113c0350d41a\',
      \'vid\' => NULL,
      \'vuuid\' => \'f436b187-2bf5-4484-bb57-b79dee365a0e\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'dgi-footer-logo.png\',
            \'uri\' => \'public://dgi-footer-logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2191\',
            \'status\' => \'1\',
            \'timestamp\' => \'1509987948\',
            \'uuid\' => \'ad9a4d02-bb15-4b1a-bd50-8bcb3ddd573b\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'130\',
            \'height\' => \'34\',
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Footer Logo\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'847549c5-2502-4938-8fbb-4ea35e2f4815\',
      \'vid\' => NULL,
      \'vuuid\' => \'4e58a48a-6a98-404f-8faa-b86676447c44\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_content_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora:collectionCModel\',
          ),
        ),
      ),
      \'field_pid_replacement_procedure\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora:bookCollection\',
            \'format\' => NULL,
            \'safe_value\' => \'islandora:bookCollection\',
          ),
        ),
      ),
      \'field_replacement_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'6\',
            \'uid\' => \'1\',
            \'filename\' => \'open-book.png\',
            \'uri\' => \'public://open-book.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'3712\',
            \'status\' => \'1\',
            \'timestamp\' => \'1509987948\',
            \'uuid\' => \'dcbddcb1-da44-4619-a963-5d6af7469612\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
          ),
        ),
      ),
      \'field_replacement_procedure\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Book Collection Thumbnail\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'imagecache_default_thumbnail\',
      \'uid\' => \'1\',
      \'uuid\' => \'8ec165d6-ac94-4a98-abb1-bd5b70f3ca6b\',
      \'vid\' => NULL,
      \'vuuid\' => \'e607ce45-1a23-4606-b286-c3660a1d6abf\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_content_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora:collectionCModel\',
          ),
        ),
      ),
      \'field_pid_replacement_procedure\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora:video_collection\',
            \'format\' => NULL,
            \'safe_value\' => \'islandora:video_collection\',
          ),
        ),
      ),
      \'field_replacement_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'7\',
            \'uid\' => \'1\',
            \'filename\' => \'video-player.png\',
            \'uri\' => \'public://video-player.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2298\',
            \'status\' => \'1\',
            \'timestamp\' => \'1509987948\',
            \'uuid\' => \'457016b5-ca74-450f-b085-7a5600e6d82c\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
          ),
        ),
      ),
      \'field_replacement_procedure\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Video thumbnail\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'imagecache_default_thumbnail\',
      \'uid\' => \'1\',
      \'uuid\' => \'940705d5-a2ab-4e48-b989-184935865988\',
      \'vid\' => NULL,
      \'vuuid\' => \'30857e8d-5fa7-4d03-8693-aa9ffcc56223\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Islandora is an open source digital repository system based on Fedora Commons, Drupal and a host of additional applications. Begin exploring by clicking the search button below, or browse repository in the above menu. You can login using the username "admin" and password "islandora".\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Islandora is an open source digital repository system based on Fedora Commons, Drupal and a host of additional applications. Begin exploring by clicking the search button below, or browse repository in the above menu. You can login using the username \\"admin\\" and password \\"islandora\\".</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image_block\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Welcome to our Digital Archive\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'9c8f491e-d901-4fc8-9b5d-75490185bdd6\',
      \'vid\' => NULL,
      \'vuuid\' => \'eaea4d5c-8206-482e-a95d-24975b39a4b6\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/9\',
        \'alias\' => \'advanced-search\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Islandora Advanced Search\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f\',
      \'vid\' => NULL,
      \'vuuid\' => \'e6b92772-5ec2-418b-9e9a-577156def660\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_content_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora:collectionCModel\',
          ),
        ),
      ),
      \'field_pid_replacement_procedure\' => array(),
      \'field_replacement_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'2\',
            \'uid\' => \'1\',
            \'filename\' => \'folderopened_yellow.png\',
            \'uri\' => \'public://folderopened_yellow.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'9321\',
            \'status\' => \'1\',
            \'timestamp\' => \'1509987948\',
            \'uuid\' => \'4fe1c2e8-455a-4b1f-b325-55b0d70960cb\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
          ),
        ),
      ),
      \'field_replacement_procedure\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Collection Default Thumbnail\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'imagecache_default_thumbnail\',
      \'uid\' => \'1\',
      \'uuid\' => \'c6fdada5-d095-4d57-8344-eb8c71e1ed64\',
      \'vid\' => NULL,
      \'vuuid\' => \'71eb17cd-7e42-4307-a01c-c09e741f4443\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lipsum\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lipsum</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'Policies\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-footer-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/10\',
        \'alias\' => \'policies\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Policies\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'dd9db579-7172-436d-a740-721ec9a68523\',
      \'vid\' => NULL,
      \'vuuid\' => \'f1c3f843-cb61-41c8-9eb1-74da357c68cf\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_content_model\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora:collectionCModel\',
          ),
        ),
      ),
      \'field_pid_replacement_procedure\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora:sp_basic_image_collection\',
            \'format\' => NULL,
            \'safe_value\' => \'islandora:sp_basic_image_collection\',
          ),
        ),
      ),
      \'field_replacement_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'5\',
            \'uid\' => \'1\',
            \'filename\' => \'camera.png\',
            \'uri\' => \'public://camera.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'4556\',
            \'status\' => \'1\',
            \'timestamp\' => \'1509987948\',
            \'uuid\' => \'4d47f9e0-d07c-4ae9-803a-79dbeeb8662e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
          ),
        ),
      ),
      \'field_replacement_procedure\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Basic Image Collection Thumbnail\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'imagecache_default_thumbnail\',
      \'uid\' => \'1\',
      \'uuid\' => \'fd28e375-598e-4613-aeb6-95e24f9c1aee\',
      \'vid\' => NULL,
      \'vuuid\' => \'d7a5dc71-e30a-4e2e-84fb-0bcf220a4f75\',
    ),
)',
);
  return $node_export;
}
