<?php
/**
 * @file
 * scsu_content_feature.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function scsu_content_feature_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
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
            \'filename\' => \'footer-logo.png\',
            \'uri\' => \'public://footer-logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'4596\',
            \'status\' => \'1\',
            \'timestamp\' => \'1521473197\',
            \'uuid\' => \'3614b5ec-2400-4013-b06a-82e6841ee43c\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'211\',
            \'height\' => \'83\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAANMAAABTCAYAAAAFtzIBAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAA7VpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wUmlnaHRzPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvcmlnaHRzLyIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcFJpZ2h0czpNYXJrZWQ9IkZhbHNlIiB4bXBNTTpPcmlnaW5hbERvY3VtZW50SUQ9InhtcC5kaWQ6MDI4MDExNzQwNzIwNjgxMThEQkJGNTAwMDFENjJCODEiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6QTZEMzU0OUU5MjM4MTFFMUI1N0NGMzdCNTJEODM4ODEiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6QTZEMzU0OUQ5MjM4MTFFMUI1N0NGMzdCNTJEODM4ODEiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDowNjgwMTE3NDA3MjA2ODExOEY2MjhGM0VGNTc4NDg3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\',
          ),
        ),
      ),
      \'field_image_url\' => array(),
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
      \'title\' => \'SCSU Footer Logo Left\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'12cc58d2-d5dc-49da-9cea-313648851a92\',
      \'vid\' => NULL,
      \'vuuid\' => \'a168eac7-c721-4719-8932-12d00653267e\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<strong>Southern Connecticut State University</strong>\\r\\n501 Crescent Street\\r\\nNew Haven, CT 06515\\r\\n\\r\\nPhone: (203) 392-SCSU",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Southern Connecticut State University</strong><br />\\n501 Crescent Street<br />\\nNew Haven, CT 06515</p>\\n<p>Phone: (203) 392-SCSU</p>\\n",
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
      \'title\' => \'SCSU Footer Contact\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'43a574de-b4e0-4646-8a6a-788e51b7a90f\',
      \'vid\' => NULL,
      \'vuuid\' => \'a19ef9e0-ad18-4f25-a99d-e97093bedfaf\',
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
      \'field_image_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'/\',
            \'format\' => NULL,
            \'safe_value\' => \'/\',
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
      \'title\' => \'SCSU Header Logo\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'a79e4323-656e-49bf-8e7f-4f190087f68f\',
      \'vid\' => NULL,
      \'vuuid\' => \'b9ddc0d9-901a-4942-bb77-e5a722bfe03f\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "©2018 Southern\\r\\nConnecticut\\r\\nState University.\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>©2018 Southern<br />\\nConnecticut<br />\\nState University.</p>\\n",
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
      \'title\' => \'SCSU Footer Copyright\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'bf93ce2e-aacd-4ba0-86b3-ddf78045d1c5\',
      \'vid\' => NULL,
      \'vuuid\' => \'dc4682bb-8701-4781-ab6e-77d9b4297813\',
    ),
)',
);
  return $node_export;
}
