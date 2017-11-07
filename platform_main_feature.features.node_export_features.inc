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
        \'source\' => \'node/145\',
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
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'audio-file.png\',
            \'uri\' => \'public://audio-file.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'3644\',
            \'status\' => \'1\',
            \'timestamp\' => \'1510072331\',
            \'uuid\' => \'d66abf2d-4911-4757-a821-5db301786705\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
            \'node_export_file_data\' => \'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\',
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
        \'source\' => \'node/147\',
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
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/149\',
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
        \'source\' => \'node/150\',
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
            \'timestamp\' => \'1510071816\',
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
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'open-book.png\',
            \'uri\' => \'public://open-book.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'3712\',
            \'status\' => \'1\',
            \'timestamp\' => \'1510072395\',
            \'uuid\' => \'8cfbefe9-8fb4-4bf2-926a-47efee8653ce\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAAIAAAACACAYAAADDPmHLAAAABHNCSVQICAgIfAhkiAAAAAlwSFlzAAADfQAAA30B9OarxAAAABl0RVh0U29mdHdhcmUAd3d3Lmlua3NjYXBlLm9yZ5vuPBoAAA39SURBVHja7Z3pU1RXGsaxtPyi5Te/WeZ/mDgZK4MzNSQzVsiYmKUmMRqjRpNoNEaJ46hIFBwGjHErxSUajYSAooAQFgkCsiqKgCBLWBuaZndDURB45rydg2mabnu7W/c913oqEel7z3mfX5/9nuMHwM/XtL/53AymOUyLmUKZYphSmfKZypmamHqYBrl6+M/K+e+k8s+E8nvQvWb4Yqx8wexpTPOZIplymExMkEkm/oxI/sxpAgDlDZ/KFMC0i6mQaUhGwx1piKchjKdpqgBAPuPnMh1m6lPRcEfq42mcKwCQxvQXmIKZ6jRsuj3V8bS/IABw3XhqdCUwjXqh8dYa5XmZIwBwbPw8pgwfMN2eKG/zBAATjX+FKc+HjbcW5fUV3QPAgjCLKV5HxluL8j5LdwCwTE9hCmLq17H5Y+rnsZiiCwBYRv2ZKoXxE0Qx8fdZAFjmJjOF+0jLXs4eA8Vosk8BwOv6fGGw08pXqm2ghPmBTL3CVJdFMQv0WgBY4icxRYgi3+MqgWI4yasA4BM2scJAyRQr10STHOZPZ8oUpkkuiul0TQPAEjiT6bowSzZRbGdqEgCWsNleOmvnjbOMszUFAP/mC/OVhWCmJgDgdb4o9tWpDqarCgBv7YsGn7oNw6mqAMD7+aKrp40u4iQ1AIgQwdeMIhQFgA/vihE+bY0YBioCAJ/YEWP72pw7mCUrAHxKV8zqaXsWcbKcAIRLldjEzjxk9FxDRvdVpDMldxXgB2M6DjTH+6xBlLeThp9xrjUHCa15SCS15SOu9bKUzwmXBQC+kkeyet/4uBu2ruHREfQM3kVNf4sZjChDotcafrglwWx0cftt1HQYYOzqhanrzgRVmBqlbg/4SwoAX8Mn6TIuewDYAqJloANZvTdwxAtgiGKmJ7cV4qap3q7hMgMwtrxsipQABEkdKGcBsLwGR56i9H4dTrSlaM74Y4aLyGkvh6GzxynTZQaAFCQJALzV368FAMauEVYqUBVxxpihuvHft6Sai3hjZ6/LxssMQL8zvQJnAJBl3b4nAPwOwqi5RIgyJKhQv18wf+ONnX1uGy8zAOb3DjwCgL+xA60CMHY9HB5AWnexYuZfaL2Cps4Oj41XAAA4egPJEQB53gDA2GUY6MR3rcny1fMtSSgzNUhmvEIA5LkFAH9RU9K6MrmtAAXtlahmXaIng08hx/Vo+DEudORKHsifDFnsW98pufmkFmM38mqqkVpXgrMNOTjeKHkjd547ALj8lu7/KqLx1rbNWLJ3J9bGfItt2cfxTc1P5n+r7GgZl+nBIXkAoGuU/Sm+WyXJoBLd4xfjDbR39cli/hgAN2+3PNOVmtvmZ1PsKIYUS4opxZZi7M5byS4BwN/Pd/lBWzKP4A+BSyfI/4NPUFBepRgAllXCEUOSBw29RFmKfEcAJOdeM8fMViwpxm7mZ44rACR4CsC7q7di3rufPft7TnGZ4gDQ1Tt4DydaU9yo7y+ipqNVdvNtAXAhveBZ3P781iosWL5RCgASnAKAb8sy6ikAhTfqzJnJvXYbsSm5uFXbogoAdD14+sg8z+BsPmi8vqHTpIj5tgDIKijH3mPR+OFcMs6nZCLmfKoUAIza2q7GFgDB7haZtgAYU0t7j2oA0DUw/ARxpiyHeYg2ZKBZpsaeswAU36w1Gz8miQAgBTsDQJ0vAkDX0OhTxHdk201/TGsmWrt6FDVfYQDqngsA34oNvgoAXU+GBxFtvGSjm5oGQ0eX4uYrDACst7CzBuCwrwNA1737/Viy9Wu88/UWsxZt3o7aRqMq5qsAQJRNAPgS7z49AEDXnXsP8PfF6/DKorWobWhVzXwVAOizXEpuCUCAp4Mm3gSAedRw4DEaWkyqmq8CAKQAWwDs0hsAdKltvkoA7LIFQKEAQDcAFI4DgG+5PiQA0A0AQ2Nb3Y8BMF+KWScBgNcAQJpvCUCkAEB3AERaApAjANAdADmWAJgEALoDwGQGgB+wBAGA7gAgzXB78YcAwCcAmOPHj0UTAOgTgMV+/Gw8AYA+AQj14wckCgD0CUCMHz8lUwCgTwBS/aTc8EEA4HUA5Pvx83IFAPoEoNyPH5osANAnAE1+/ORsAYA+Aejx48enCwD0CcCgAEAAIKoAvVcBohGo80ag6AbqvBsoBoJ0PhAkhoJ1PhQsJoN0PhkkpoN1Ph0sFoTofEGIWBKm8yVhYlGonheFimXhOl8WLl4MES+GiFfDxKth4uVQvb8cKl4P1/Pr4VBhg4jeOw9w595D3L3/m+49eISHj56YN5EeGRnxOQDaOvqY0T1oMHSittGEmoZ2VNczNRhR9WubuhtEQIUtYhyps+euGYzHT4YwOjrqdQC0MzW3dZmNLq9uHRcLR1Jri5gALQFgqY7uu6y06Gelw5DmAWhu62bf6naUVbe4ZLoWNolSdJs4d9Xddx8Djwc1BUB7Zx8aWdF+q7bVbdNV3yYOCm8U6am6eu7h4cATVQGgYr6hpRPlNQZJjFd1o0govFWsVOphJYInPQp3n2tgDbpbdW2SGq/6VrFQcLNoqUUNxpGRUdkBoOPhalgrXg7jVd8sGgptF9/W0Yum1m7Us+Lz16YO1DWZzA2n6nojazUbWTepHXXNJtQ3d7C6tQuG9l5zcetMz4F6DXIBQA28smrHxX1pVbPZxCtXK5BddBNZeTdwKbcE6TnFSLtchAz238wrJcgqKEVOURnySypxvaJBM9vFS3pgxJhqGn/r91a4WV9Sq5oaWdStInCMJvtn+NzvH5AUAGrkEaT20lZyqx65xeXIyL2K5EtXmGm/jDPQWSWmZSMtuwiZudfkAMC5AyMg0ZEx1gDIoSpWBxMMraaJp3bSQNPw8IjHAFBpVWmjri+pqEd24U2kZOa5ZbYrkggA546MgUSHRikBgKXIJKpW2q2qBEcNxOcP0faML/JZ0U7F9c+/yG+6DAA4f2gU3Dw2zhKA8MM/IiYpGznFlYqCQNUEdc3aO38fRHpeu+C59T2/542qJnMRn5Seo6jxp+MuYs+RM/gqbL+nALh2bBzcPDgyJO8728fGvf0J/rU6GOt3HkDk0VhEJ2bhcuEtWUEoY22NegsQ7A0e2TKfBnV+G8lrNjfSElMvy2r097FJ2B11Gv/+70EsDwrFGyuC8PLClTZjSTFW5OBIuHl07NbLR/HZ6d14P2I7AtdvwMvvrbKZEdLLb63EO59uwbqQfQg/FI3T5y8hM7+MfeOaJS0RqCgnYx8+euwQAIKGPldUWs0bdNKYHM90IiYBEYdOISh0H5Zt2InXl23A3DdX2I8Pix3FkGJJMaXYKnZ0LCQ8PDqy6kdszTqCNdHf4IPdIXh9w0b4L7IPxp/e/BgLV23GmuA9CDt4BifPpiMttxSllU1ug0C9ByNr0PVbQWBt/vVbjazLdtV9o5Mv4Vj0eYQfPImNO/biwy9D8NrSL/HSAvtGUywoJhQbihHFimKm+uHRkPH4ePPRqNXjj0ZdsOkr/GXJZ3jx9Y9sg/HGciz4eBM+3bobOw+cwvHYVPycXcJMcw6Mctago7rdsjqwLPYLrt9GQppzxf25pAwcPXMOYftP4Msde7Dki+2Y/+EXzOhlNtNOeaK8UR7HHa1b/ZOcB0d7dnw8B2AWU79SR7OT9tTGYvuV41gXtxdL94fizc2b8NePVrMg2v4GzfnnclacBmHV5giE7P0eR2NSkJx1DdcqGm2CUNfU8axhaOLTttkFpTaNjmNGR50+i9B9LD0hrARbG4x/LF7HnmnP6KXmtFKaKe2UB8oL5UnJGHLPZnkMAIcgSOHE29S3v8YhpOAE1sfvx7KDYVi4dTP+tmINXrRnBvv5a0s34ONN4Qje8x2ioi8iKbMIV8vrzYNStPikhZUI6VkFiE1Mx6FTcdjx7TGsDY7E+2u24dVFn9stjeje9GxKA6WF0kRpozRqIVbkmTPeOgvAFKZKjWRsgvY2nMWOopPYkHAAK6J24e3t/0HAys/xxzfsF8fzl6zHpvBDWL0tEgHvrbFrNN2D7kX3pHvTM+hZ9EytxoN7NUUyADgE/u4OEaulfY2s6C45hY0XD2Ll0XC8+/UWvPrpOry0cPkEo+ln9G/0O/S79Bn6LN3Dm/LMPfJ31lenAeAQhHtZMGyD0XQWYTdOY1PKIbPo/+lnvpA38sgVT10FYLKUG0oISS7yZrJsAFj0CnpFsDWnXmda/R4DwCEI9Lb2gI+LvAh0x0u3AOAQRIjAa0YR7vroCQCTmGJF8FUXeTBJcQAslpJnChNUU6blEm/FAeAQTGe6LsxQXBTz6Z765zEAHIKZnqwmFnJ9dS/FXArvJAGAQzBbQKCY+bOl8k0yACxKAlEdyFvsz5TSM0kBsGgTiIahPA2+6VL7JTkAFr0D0UWUtqs3VQ6vZAHAYpwgQowYejzCF+FJP181AKyGjcXcgXtj+4Fy+yM7ABYTSGIW0bVZvVlKeKMIABZTyeGiSnBY5Ie7OqXrFQBYrSyqFGbbXMblr7QfigNgscYwSOnVxhpVP4/FFDW8UAUAq7ZBvI7Nj1eqrtckAFZvIOXpyPg8R2/s6AoAqxdSM3zY+IznvaipewCs9idI8JEewyjPyxwtxlqTAFhtVxPspbOMdTztL2g5xpoGwMYWdoc93cxSZvXxNM71lrh6DQBWE00BfG/jQil2Ofdw121KQxhP01Rvi6fXAWADiGn8vINIfvKJSUbDTfwZkfyZ07w9fl4PgB0oZvCG5GJ+LmIMPyE1n5+V3MRPTR/k6uE/K+e/k8o/E8rvQfea4Yux+j8x7Wb6boKnTQAAAABJRU5ErkJggg==\',
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
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'video-player.png\',
            \'uri\' => \'public://video-player.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2298\',
            \'status\' => \'1\',
            \'timestamp\' => \'1510072378\',
            \'uuid\' => \'0934266e-c8ba-4427-8694-ee8a42c1e6eb\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
            \'node_export_file_data\' => \'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\',
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
        \'source\' => \'node/157\',
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
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'folderopened_yellow.png\',
            \'uri\' => \'public://folderopened_yellow.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'9321\',
            \'status\' => \'1\',
            \'timestamp\' => \'1510072350\',
            \'uuid\' => \'8e87a836-cf5a-4d35-b7d8-ea290ee4fa54\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
            \'node_export_file_data\' => \'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\',
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
        \'source\' => \'node/159\',
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
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'camera.png\',
            \'uri\' => \'public://camera.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'4556\',
            \'status\' => \'1\',
            \'timestamp\' => \'1510072319\',
            \'uuid\' => \'7601a054-8fb7-494a-8398-adcb87b5da1d\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
            \'node_export_file_data\' => \'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\',
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
