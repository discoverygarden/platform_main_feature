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
            \'timestamp\' => \'1520433837\',
            \'uuid\' => \'f8f80969-726e-4735-98f0-36543bb7acbb\',
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
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'southern-logo-blue-200.png\',
            \'uri\' => \'public://southern-logo-blue-200.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'11775\',
            \'status\' => \'1\',
            \'timestamp\' => \'1520443447\',
            \'uuid\' => \'f370f197-cd63-4962-a924-0e254f265a6f\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'200\',
            \'height\' => \'39\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAAMgAAAAnCAYAAABKSgfJAAAAAXNSR0IArs4c6QAAAAlwSFlzAAALEwAACxMBAJqcGAAABVhpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IlhNUCBDb3JlIDUuNC4wIj4KICAgPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4KICAgICAgPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIKICAgICAgICAgICAgeG1sbnM6ZGM9Imh0dHA6Ly9wdXJsLm9yZy9kYy9lbGVtZW50cy8xLjEvIgogICAgICAgICAgICB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIKICAgICAgICAgICAgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiCiAgICAgICAgICAgIHhtbG5zOnRpZmY9Imh0dHA6Ly9ucy5hZG9iZS5jb20vdGlmZi8xLjAvIgogICAgICAgICAgICB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iPgogICAgICAgICA8ZGM6dGl0bGU+CiAgICAgICAgICAgIDxyZGY6QWx0PgogICAgICAgICAgICAgICA8cmRmOmxpIHhtbDpsYW5nPSJ4LWRlZmF1bHQiPlNDU1VfTG9nb0Jsa188L3JkZjpsaT4KICAgICAgICAgICAgPC9yZGY6QWx0PgogICAgICAgICA8L2RjOnRpdGxlPgogICAgICAgICA8eG1wTU06RGVyaXZlZEZyb20gcmRmOnBhcnNlVHlwZT0iUmVzb3VyY2UiPgogICAgICAgICAgICA8c3RSZWY6aW5zdGFuY2VJRD54bXAuaWlkOjRlODA0NzY5LWNmMDctNGUyMi05NGJhLTk2ZTNkNWM1OTI4Yzwvc3RSZWY6aW5zdGFuY2VJRD4KICAgICAgICAgICAgPHN0UmVmOmRvY3VtZW50SUQ+eG1wLmRpZDo0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\',
          ),
        ),
      ),
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
