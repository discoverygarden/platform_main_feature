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
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAAIAAAACACAYAAADDPmHLAAAABHNCSVQICAgIfAhkiAAAAAlwSFlzAAADmwAAA5sBPN8HMQAAABl0RVh0U29mdHdhcmUAd3d3Lmlua3NjYXBlLm9yZ5vuPBoAAA25SURBVHic7Z1rbBTXFcd/u17bxOv1jl9JAddENtjQEJUkhkWJiUgimipDJRpFyqMibT80JVGlJFUV5aEKUAo0kaok/dBUiaoqQRFUoohKLBWKQlJwI4ZXDIUkdmrKw9gBG3u8tsHv6YeZhcXsrnc9d2dmvfOTViaO987ZOf+9986955zr0TSNmYaqyCVAHVBvvGoBCSgBApN+AkSA/kk/VaANaDFerVIoHLHuU1iDJ9sFoCqyH2gEHgSWoTt8doYu14kuhkPAPqBJCoUHM3QtS8g6AaiKXMB1hz8ALAXybTJnFDiMLoZP0QUxYpMt0yJrBKAq8nJgLfAEUGazOYnoAbYDW6VQ+KDdxqSCowWgKvI8dKevRR/Ts4lWYCu6GM7abUwiHCkAVZEbgFeBNYDHZnPMogG7gM1SKHzEbmMm4ygBqIq8AngNeNhuWzLEXmCTFAofsNuQKI4QgKrIDwHrgRV222IRB4CNUij8id2G2CoAVZGrgLeAx2wzwl52AC9KoXC7XQbYIgBVkX3A88AGoNhyA5zFAPp9eEcKhcesvrjlAlAVuRF4F1hs6YWdz0ngWSkUbrLyopYJQFXkPOB14GWyf2afKTTg98BvpVB43IoLWiIAY6zfhr6C5zI1TcCTVswNvJm+gKrIjwDNuM5Ph0ag2bh3GSVjPYCqyB5gC/ASbpc/XTTgTeAVKRTOiKMyIgBjw+YD9HV7F/NsB36aiY0m4QJQFbkY2AmsEtqwy8fAo1IoPCCyUaECUBW5EtgDNAhr1CWWI8AjUijcJapBYQJQFbkaXaXZtmuXbbQCq6RQ+JyIxoQIwPjmN+E63ypagUYRPYHpx0BjzN+D63wrqQP2GPfeFKYEYMz2d+KO+XbQAOw0fDBtpi0A4zn/A9zZvp2sAj4wfDEtzPQAW3Cf853AE+i+mBbTmgQaS5S7cVf4nIIGrJZC4T3pvjFtARgbO81AeboXc8kol4El6W4gpTUEGFu623Cd70TKgW2Gj1LGl+ZFXkfwrt4YXs5pQdq0Us5QxqBmbY7HWLe1QTj+vFFqClRqC1XmFUTI90yIbL4R3UevpvqGlIcAI5JnPwLH/YNaFe+PNxChUFSTaTNyzr5EnqB3mHWVzdzr7xDZrAbcn2pkUUoCMGL4vkBQGNcV8nlvooF/T1SLaM4Udgogyoridp6raKbIOyqqyZPAXanEGKY6B3gegTF8TnG+UzgwUMWfupeIbHIxus+mZEoBGLP+DSYNusZBrcp1fhwODFTx+eAckU1uMHyXlFR6gLcQFLo9hpf3x91V40T8uWsJo5qwKL1idN8lJenVjIwdYUkb57SgrRM+p9M3UcjZkZKp/zB1HjN8mJCp5LZeoDG0aaUim5uRtA1LoptM6sOEAjASNYXm6p1xbFq/czg9IlwAKwxfxiVZD/CaaEusXuSxk/JZRSz/zndZU7MwrfcNjmfkHiX0ZdyVQCM/f6amaAunMC+P+cFyFkhlLJAqqCstp6zwFgC6rg6y6/TXNlvIw6oiN8SrT5BoKTjlpcRcw+vxMLc4wIJgOXVSBQtKy6kuDuL1OH5j9FXg0cm/vEkARlmWNVZYlA0EC2exIFh2zdnzg+UU+dLdQnEEa1RFnje5XE28T7KWHN3n93nzqAlK1AUrWCDpTr+1yG+3WaLwoPv2d7G/TCSAnGDOrADVcwPUBctYUFrOvEAp+d6Mp0vaSXIBGKXYZmR0b4mvkIWBChYGKqgvrmBRoIKAr5DuPqGJNk6nTlXk5bEl7Cb3ADPi25/vzaPWX8qi4krqA+UsClQyZ1bAbrOcwtPAzQIwwouzPsjz7Tt/SH2gAp9nRnflZnhcVeQXoommsXepEedW4EyZuuJy1/nJKSMmqiv2Tj1ovS0uNnHN17ECeMAGQ1zs4ZqvvXCt5PpS28xxsZqlhs+v9QCN2FdyPesZm5jg5OVLfNRy3G5TUiUfYx4QfQpwx/806Rse4lh3J0cvdXC861uujI2Sn5fHT+q/b7dpqfIgsDcqgGV2WpINaMD/Ij0cvdjJsa4O/tvXw4QD6iybYBlc7wHqbTTEsQyNj3G8+yLHLl3g2KVOeoav2m2SSOoBfMYBS5k6YyfruHhlkKOXLnD0Ugcne7oYm7CkYKcdzFYVucTHDF37T5VxbYKve7s5crGDo10dXBiYcQeDJaPORw52/72jQxzuvYDS287nJ85wZUxYRk62UZ8TAtDQaBm4jNLTzqHeC3wzcJno9G0kd50PhgBq7bYik/SPDfPzY/+gb3TIblOcSK0X/UTNGcuYprnOT4zk5frxqS65R4kX/Qxdl9wk4PYAuY3bA+Q4bg+Q45S4sVM5jhfIqbVPlxuIeIF+u61wsY1+twfIbdweIMdxe4AcJ+IDVLutyEaKfD6qAkGq/CVIhbOIjIxwNft2FlUf0Ga3FdlEXWk5a2oWsfTWudlQFGIq2nxAi91WZAPVxUGeubOBRaWVdpsikhZXACnwvbJKXr7nfvz5My51osWHfgSZSwLuqpzDy/fch8+bVhn+bKHVK4XCEaDTbkucSL7Xyy8X32PK+RPOTR3olELhSHQvwB0G4vCD6gVU3mKuRtD5/j5B1ginBa7nBh6y0RDHsuy2uabbaOnrFmBJRjgE1zOD9gEv2WdL+pQXFHF7kcS8oiBlBUX0jw7RNzaMR+Cj2YRm7jiX/pERPjl/WpA1wtkH1wXQBIySBRnCd0uzeXzuYu6WMp/MdHXcXFbQe6eO0DfsyIDUUXSf60OAFAoPAofttGgq5vvLeHfJat64Y5UlzgfY8c2paSWAjmsT/PXLL/i8U8gB35ngsOHzGyqEfGqTMVNyjzSbP9z5MPP91pYwOh3pYVfbV2m9Rx0eYqPyGbvPOHpefc3XsWXi9pGBCuFmWV5WxfqFK20r/PRR6wm+7O3mZ4uWUFWcOHrufH+E8NkW/tV+lpEJa4+imwb7ov+IFUAT0IODKoX5PF5+VRMy5fxxkxM5gC+6OjjR/S0LSyuoCpRQ5S/Bn1/At1cG6Bjs58JAhDORXpz7yH8DPRjjP8QIQAqFR1RF3g48Z4dV8fjR7HpuKzT3HH7mipjNznFtglM9lzjVc0lIezbyt2iNQLj5wIitFhuTlAbJ/ClapyJZ7zDRfBj7HzcIwKgh65i9AbMlWPpGh9j9rWM+jhNoja0TDPGPjHFMLzA4bu5Uzz+2KahuYmgsN/k2kQAcMZ/58NxxRqZRomVMm+DttoPsv3x26j/OHTRSEYBxosQuKyyaio6hfv5y9lhaarw4PMiv/7OXsNv1T2bX5NNCIPGZQZuBH2fWntTY2fEVX0a6WFezlDsCiaNxWga6+XvHV+zvPsN4dpdvyxSb4/0yrgCkUPiIqsh7ccjJYV8PdPPCiX9S4y+l+pYg1UVBgr5ZdAz1c/5qH+evRugccqPbk7A33olhkLgHANiEYAH4PaOmZhenB3s5PdgrziAH4s/LSGTxpkT/I+ESmxQKHwAOiLTidnpENjcjqSkQHqV/wPBlXKZaY90o0pJaz8z+9oqgtlC4AJL6MKkApFD4E2CHKEuqPX2UMCyquRlH0DvMvAKhiVo7DB8mJJVdlhcBIUdr+ZjgF3lx5yIuwLrKZvI95jevDAbQfZeUKQUghcLtwAYBBgGw3NPOfV7HBkrYxoridu71d4hscoPhu6Skus/6DnDSnD3XecZ7xBVBDCuK23muollkkyfRfTYlHi3FRRNVkRuB/Qg8VvagVsX74w1EKBTVZNqMnDO332CGoHeYdZXNor/5GnC/FAo3TfmXpCEAAFWRNwOvTNOwuIzh5ZwWpE0r5QxlDGrWxqWOdVsbvePPG6WmQKW2UGVeQUTkmB9lixQKp3z6e7oCyAM+I+bcORdH0QSslELhlHfQ0hIAgKrIVUAzUJ6ebS4Z5jKwJJWJXyxpB9sZF3gah2wZuwC6L55O1/kwDQEASKHwHuDN6bzXJSO8afgkbczEWr8CbDfxfhcxbMfExDztOUAsxonju4FV027ExQwfA6tjo3zTxZQAAFRFLkbPNGkw1ZBLuhwBHpBCYVPL9KYFAKAqciX6I0hOn0BmIa1AoxQKd5ltSEi+lWHIKhwUUj6DaQVWiXA+CBIAgBQKn0NfIHK3+zLHEfRvvrCNFKEZl4YqH0CfnLiI5WP0MV/INz+K8JRbY1KyGvcRUSTb0Wf7QuIyYslIzrXxWPIU8AbuiqEZNPR7+JSZR71kCHkKSIaqyI+gJyS6ewfpcRl9eXdaK3ypknEBwLUNpG24u4ip0gQ8OZ21/XSxpOyG8UFWAltwh4RkaOj3aKUVzgeLeoBYjMiid4HFll7Y+ZwEnk01kkcUlhfeMT7gXcBvEBRtnOUMoN+Lu6x2PtjQA8RizA3eAh6zzQh72QG8aFV3Hw9bBRBFVeSHgPXACrttsYgDwMapkjaswBECiKIq8gr0UnWOyErOAHuBTcly9azGUQKIoipyA/AqsAaBYeg2oaEX3NicKEXbThwpgCiqIs8D1hqvbNtqbkUvybI1XmUOp+BoAcSiKvJydCE8gYOKWU6iB33dfuvkalxOJWsEEMUIQ2sEHkTfeVyKfVXOR9GLbO9Dj4pqytSafabIOgFMRlVkP9cFsQyoBzJVTrwT/aSNQ+hOb4pW3c5Wsl4A8VAVuQR9zlBvvGoBCSgBApN+gn56av+knyr6mYotxqvVOF9pRvF/QJSEXb+d2XUAAAAASUVORK5CYII=\',
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
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ac est vel dolor ultricies pulvinar. Fusce dignissim auctor scelerisque. Integer porttitor hendrerit tellus ac condimentum. Mauris sodales nunc sed libero laoreet, id venenatis urna dignissim. Morbi vehicula augue felis, nec luctus dolor volutpat vel. Maecenas interdum lacinia congue. Quisque ullamcorper orci nisi, vel aliquet lectus porta non. Praesent quis quam nec ex elementum accumsan. Etiam vitae rhoncus ante. Aenean eu leo in leo aliquam maximus.\\r\\n\\r\\nSed ac diam iaculis, rhoncus massa ut, consequat libero. Aenean mattis nisl a risus pellentesque scelerisque. Phasellus tincidunt risus vitae nibh congue tincidunt. Nam sed fermentum ipsum. Sed ut lacus pulvinar, tristique eros et, dignissim lorem. Maecenas at sapien porttitor, mollis sem a, viverra lectus. Donec eleifend tellus sapien, nec ultricies ligula luctus et.\\r\\n\\r\\nDuis feugiat imperdiet pharetra. Aenean semper lacus eu ligula sagittis, sit amet tempor risus luctus. Pellentesque ultrices malesuada tellus imperdiet auctor. Quisque venenatis ut massa sed bibendum. Donec vehicula gravida mi ac blandit. Ut scelerisque mattis neque id rhoncus. Vestibulum blandit lacus eget metus tincidunt finibus. Etiam vulputate blandit justo, eget interdum ipsum laoreet at. Sed nec condimentum erat. Aenean quis ex tincidunt, pulvinar urna ac, vulputate nulla. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.\\r\\n\\r\\nProin imperdiet, ante eget iaculis iaculis, ipsum nulla vestibulum nisi, sit amet ultrices nulla dui a augue. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris sit amet vestibulum elit. Nulla porttitor elit in risus viverra, eget commodo purus pulvinar. Curabitur sit amet suscipit justo, sit amet commodo ante. Quisque at neque tellus. Ut gravida, metus quis aliquam iaculis, nisl purus tristique velit, aliquam scelerisque risus turpis ultricies risus. Sed a pulvinar velit, eu porta justo.\\r\\n\\r\\nIn at euismod dolor. Cras et erat vulputate, rhoncus sem vel, feugiat diam. Cras malesuada consequat sollicitudin. In at libero nec ipsum ullamcorper pellentesque nec quis risus. Nulla pretium quam eget ex tincidunt, ut vulputate sapien rutrum. Nullam dignissim consectetur est, eget pretium eros egestas id. Aenean eget consequat tortor. Praesent eget lorem sed diam sodales suscipit et sed nibh. Ut in orci eget urna sollicitudin finibus. Morbi eu bibendum dolor. ",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ac est vel dolor ultricies pulvinar. Fusce dignissim auctor scelerisque. Integer porttitor hendrerit tellus ac condimentum. Mauris sodales nunc sed libero laoreet, id venenatis urna dignissim. Morbi vehicula augue felis, nec luctus dolor volutpat vel. Maecenas interdum lacinia congue. Quisque ullamcorper orci nisi, vel aliquet lectus porta non. Praesent quis quam nec ex elementum accumsan. Etiam vitae rhoncus ante. Aenean eu leo in leo aliquam maximus.</p>\\n<p>Sed ac diam iaculis, rhoncus massa ut, consequat libero. Aenean mattis nisl a risus pellentesque scelerisque. Phasellus tincidunt risus vitae nibh congue tincidunt. Nam sed fermentum ipsum. Sed ut lacus pulvinar, tristique eros et, dignissim lorem. Maecenas at sapien porttitor, mollis sem a, viverra lectus. Donec eleifend tellus sapien, nec ultricies ligula luctus et.</p>\\n<p>Duis feugiat imperdiet pharetra. Aenean semper lacus eu ligula sagittis, sit amet tempor risus luctus. Pellentesque ultrices malesuada tellus imperdiet auctor. Quisque venenatis ut massa sed bibendum. Donec vehicula gravida mi ac blandit. Ut scelerisque mattis neque id rhoncus. Vestibulum blandit lacus eget metus tincidunt finibus. Etiam vulputate blandit justo, eget interdum ipsum laoreet at. Sed nec condimentum erat. Aenean quis ex tincidunt, pulvinar urna ac, vulputate nulla. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.</p>\\n<p>Proin imperdiet, ante eget iaculis iaculis, ipsum nulla vestibulum nisi, sit amet ultrices nulla dui a augue. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris sit amet vestibulum elit. Nulla porttitor elit in risus viverra, eget commodo purus pulvinar. Curabitur sit amet suscipit justo, sit amet commodo ante. Quisque at neque tellus. Ut gravida, metus quis aliquam iaculis, nisl purus tristique velit, aliquam scelerisque risus turpis ultricies risus. Sed a pulvinar velit, eu porta justo.</p>\\n<p>In at euismod dolor. Cras et erat vulputate, rhoncus sem vel, feugiat diam. Cras malesuada consequat sollicitudin. In at libero nec ipsum ullamcorper pellentesque nec quis risus. Nulla pretium quam eget ex tincidunt, ut vulputate sapien rutrum. Nullam dignissim consectetur est, eget pretium eros egestas id. Aenean eget consequat tortor. Praesent eget lorem sed diam sodales suscipit et sed nibh. Ut in orci eget urna sollicitudin finibus. Morbi eu bibendum dolor.</p>\\n",
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
      \'language\' => \'en\',
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
      \'title\' => \'What is GCDAMP?\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'417718b4-c0e7-41a7-b0db-f3d60dea0f8a\',
      \'vid\' => NULL,
      \'vuuid\' => \'7a87d43f-8ea3-402b-a3fa-b9a61281f1d9\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ac est vel dolor ultricies pulvinar. Fusce dignissim auctor scelerisque. Integer porttitor hendrerit tellus ac condimentum. Mauris sodales nunc sed libero laoreet, id venenatis urna dignissim. Morbi vehicula augue felis, nec luctus dolor volutpat vel. Maecenas interdum lacinia congue. Quisque ullamcorper orci nisi, vel aliquet lectus porta non. Praesent quis quam nec ex elementum accumsan. Etiam vitae rhoncus ante. Aenean eu leo in leo aliquam maximus.\\r\\n\\r\\nSed ac diam iaculis, rhoncus massa ut, consequat libero. Aenean mattis nisl a risus pellentesque scelerisque. Phasellus tincidunt risus vitae nibh congue tincidunt. Nam sed fermentum ipsum. Sed ut lacus pulvinar, tristique eros et, dignissim lorem. Maecenas at sapien porttitor, mollis sem a, viverra lectus. Donec eleifend tellus sapien, nec ultricies ligula luctus et.\\r\\n\\r\\nDuis feugiat imperdiet pharetra. Aenean semper lacus eu ligula sagittis, sit amet tempor risus luctus. Pellentesque ultrices malesuada tellus imperdiet auctor. Quisque venenatis ut massa sed bibendum. Donec vehicula gravida mi ac blandit. Ut scelerisque mattis neque id rhoncus. Vestibulum blandit lacus eget metus tincidunt finibus. Etiam vulputate blandit justo, eget interdum ipsum laoreet at. Sed nec condimentum erat. Aenean quis ex tincidunt, pulvinar urna ac, vulputate nulla. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.\\r\\n\\r\\nProin imperdiet, ante eget iaculis iaculis, ipsum nulla vestibulum nisi, sit amet ultrices nulla dui a augue. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris sit amet vestibulum elit. Nulla porttitor elit in risus viverra, eget commodo purus pulvinar. Curabitur sit amet suscipit justo, sit amet commodo ante. Quisque at neque tellus. Ut gravida, metus quis aliquam iaculis, nisl purus tristique velit, aliquam scelerisque risus turpis ultricies risus. Sed a pulvinar velit, eu porta justo.\\r\\n\\r\\nIn at euismod dolor. Cras et erat vulputate, rhoncus sem vel, feugiat diam. Cras malesuada consequat sollicitudin. In at libero nec ipsum ullamcorper pellentesque nec quis risus. Nulla pretium quam eget ex tincidunt, ut vulputate sapien rutrum. Nullam dignissim consectetur est, eget pretium eros egestas id. Aenean eget consequat tortor. Praesent eget lorem sed diam sodales suscipit et sed nibh. Ut in orci eget urna sollicitudin finibus. Morbi eu bibendum dolor. ",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ac est vel dolor ultricies pulvinar. Fusce dignissim auctor scelerisque. Integer porttitor hendrerit tellus ac condimentum. Mauris sodales nunc sed libero laoreet, id venenatis urna dignissim. Morbi vehicula augue felis, nec luctus dolor volutpat vel. Maecenas interdum lacinia congue. Quisque ullamcorper orci nisi, vel aliquet lectus porta non. Praesent quis quam nec ex elementum accumsan. Etiam vitae rhoncus ante. Aenean eu leo in leo aliquam maximus.</p>\\n<p>Sed ac diam iaculis, rhoncus massa ut, consequat libero. Aenean mattis nisl a risus pellentesque scelerisque. Phasellus tincidunt risus vitae nibh congue tincidunt. Nam sed fermentum ipsum. Sed ut lacus pulvinar, tristique eros et, dignissim lorem. Maecenas at sapien porttitor, mollis sem a, viverra lectus. Donec eleifend tellus sapien, nec ultricies ligula luctus et.</p>\\n<p>Duis feugiat imperdiet pharetra. Aenean semper lacus eu ligula sagittis, sit amet tempor risus luctus. Pellentesque ultrices malesuada tellus imperdiet auctor. Quisque venenatis ut massa sed bibendum. Donec vehicula gravida mi ac blandit. Ut scelerisque mattis neque id rhoncus. Vestibulum blandit lacus eget metus tincidunt finibus. Etiam vulputate blandit justo, eget interdum ipsum laoreet at. Sed nec condimentum erat. Aenean quis ex tincidunt, pulvinar urna ac, vulputate nulla. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.</p>\\n<p>Proin imperdiet, ante eget iaculis iaculis, ipsum nulla vestibulum nisi, sit amet ultrices nulla dui a augue. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris sit amet vestibulum elit. Nulla porttitor elit in risus viverra, eget commodo purus pulvinar. Curabitur sit amet suscipit justo, sit amet commodo ante. Quisque at neque tellus. Ut gravida, metus quis aliquam iaculis, nisl purus tristique velit, aliquam scelerisque risus turpis ultricies risus. Sed a pulvinar velit, eu porta justo.</p>\\n<p>In at euismod dolor. Cras et erat vulputate, rhoncus sem vel, feugiat diam. Cras malesuada consequat sollicitudin. In at libero nec ipsum ullamcorper pellentesque nec quis risus. Nulla pretium quam eget ex tincidunt, ut vulputate sapien rutrum. Nullam dignissim consectetur est, eget pretium eros egestas id. Aenean eget consequat tortor. Praesent eget lorem sed diam sodales suscipit et sed nibh. Ut in orci eget urna sollicitudin finibus. Morbi eu bibendum dolor.</p>\\n",
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
      \'language\' => \'en\',
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
      \'title\' => \'GCDAMP Stakeholders\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'5bde3d78-db84-4d10-8378-7304fdc9d782\',
      \'vid\' => NULL,
      \'vuuid\' => \'530d22be-9627-4086-aaaa-fdfd23ed7717\',
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
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ac est vel dolor ultricies pulvinar. Fusce dignissim auctor scelerisque. Integer porttitor hendrerit tellus ac condimentum. Mauris sodales nunc sed libero laoreet, id venenatis urna dignissim. Morbi vehicula augue felis, nec luctus dolor volutpat vel. Maecenas interdum lacinia congue. Quisque ullamcorper orci nisi, vel aliquet lectus porta non. Praesent quis quam nec ex elementum accumsan. Etiam vitae rhoncus ante. Aenean eu leo in leo aliquam maximus.\\r\\n\\r\\nSed ac diam iaculis, rhoncus massa ut, consequat libero. Aenean mattis nisl a risus pellentesque scelerisque. Phasellus tincidunt risus vitae nibh congue tincidunt. Nam sed fermentum ipsum. Sed ut lacus pulvinar, tristique eros et, dignissim lorem. Maecenas at sapien porttitor, mollis sem a, viverra lectus. Donec eleifend tellus sapien, nec ultricies ligula luctus et.\\r\\n\\r\\nDuis feugiat imperdiet pharetra. Aenean semper lacus eu ligula sagittis, sit amet tempor risus luctus. Pellentesque ultrices malesuada tellus imperdiet auctor. Quisque venenatis ut massa sed bibendum. Donec vehicula gravida mi ac blandit. Ut scelerisque mattis neque id rhoncus. Vestibulum blandit lacus eget metus tincidunt finibus. Etiam vulputate blandit justo, eget interdum ipsum laoreet at. Sed nec condimentum erat. Aenean quis ex tincidunt, pulvinar urna ac, vulputate nulla. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.\\r\\n\\r\\nProin imperdiet, ante eget iaculis iaculis, ipsum nulla vestibulum nisi, sit amet ultrices nulla dui a augue. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris sit amet vestibulum elit. Nulla porttitor elit in risus viverra, eget commodo purus pulvinar. Curabitur sit amet suscipit justo, sit amet commodo ante. Quisque at neque tellus. Ut gravida, metus quis aliquam iaculis, nisl purus tristique velit, aliquam scelerisque risus turpis ultricies risus. Sed a pulvinar velit, eu porta justo.\\r\\n\\r\\nIn at euismod dolor. Cras et erat vulputate, rhoncus sem vel, feugiat diam. Cras malesuada consequat sollicitudin. In at libero nec ipsum ullamcorper pellentesque nec quis risus. Nulla pretium quam eget ex tincidunt, ut vulputate sapien rutrum. Nullam dignissim consectetur est, eget pretium eros egestas id. Aenean eget consequat tortor. Praesent eget lorem sed diam sodales suscipit et sed nibh. Ut in orci eget urna sollicitudin finibus. Morbi eu bibendum dolor. ",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ac est vel dolor ultricies pulvinar. Fusce dignissim auctor scelerisque. Integer porttitor hendrerit tellus ac condimentum. Mauris sodales nunc sed libero laoreet, id venenatis urna dignissim. Morbi vehicula augue felis, nec luctus dolor volutpat vel. Maecenas interdum lacinia congue. Quisque ullamcorper orci nisi, vel aliquet lectus porta non. Praesent quis quam nec ex elementum accumsan. Etiam vitae rhoncus ante. Aenean eu leo in leo aliquam maximus.</p>\\n<p>Sed ac diam iaculis, rhoncus massa ut, consequat libero. Aenean mattis nisl a risus pellentesque scelerisque. Phasellus tincidunt risus vitae nibh congue tincidunt. Nam sed fermentum ipsum. Sed ut lacus pulvinar, tristique eros et, dignissim lorem. Maecenas at sapien porttitor, mollis sem a, viverra lectus. Donec eleifend tellus sapien, nec ultricies ligula luctus et.</p>\\n<p>Duis feugiat imperdiet pharetra. Aenean semper lacus eu ligula sagittis, sit amet tempor risus luctus. Pellentesque ultrices malesuada tellus imperdiet auctor. Quisque venenatis ut massa sed bibendum. Donec vehicula gravida mi ac blandit. Ut scelerisque mattis neque id rhoncus. Vestibulum blandit lacus eget metus tincidunt finibus. Etiam vulputate blandit justo, eget interdum ipsum laoreet at. Sed nec condimentum erat. Aenean quis ex tincidunt, pulvinar urna ac, vulputate nulla. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.</p>\\n<p>Proin imperdiet, ante eget iaculis iaculis, ipsum nulla vestibulum nisi, sit amet ultrices nulla dui a augue. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris sit amet vestibulum elit. Nulla porttitor elit in risus viverra, eget commodo purus pulvinar. Curabitur sit amet suscipit justo, sit amet commodo ante. Quisque at neque tellus. Ut gravida, metus quis aliquam iaculis, nisl purus tristique velit, aliquam scelerisque risus turpis ultricies risus. Sed a pulvinar velit, eu porta justo.</p>\\n<p>In at euismod dolor. Cras et erat vulputate, rhoncus sem vel, feugiat diam. Cras malesuada consequat sollicitudin. In at libero nec ipsum ullamcorper pellentesque nec quis risus. Nulla pretium quam eget ex tincidunt, ut vulputate sapien rutrum. Nullam dignissim consectetur est, eget pretium eros egestas id. Aenean eget consequat tortor. Praesent eget lorem sed diam sodales suscipit et sed nibh. Ut in orci eget urna sollicitudin finibus. Morbi eu bibendum dolor.</p>\\n",
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
      \'language\' => \'en\',
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
      \'title\' => \'GCDAMP Research\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'711041f4-39bb-491b-a864-38b34e017434\',
      \'vid\' => NULL,
      \'vuuid\' => \'9df41b52-e400-4c77-8d51-3dd9f652c5a5\',
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
            \'value\' => "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ac est vel dolor ultricies pulvinar. Fusce dignissim auctor scelerisque. Integer porttitor hendrerit tellus ac condimentum. Mauris sodales nunc sed libero laoreet, id venenatis urna dignissim. Morbi vehicula augue felis, nec luctus dolor volutpat vel. Maecenas interdum lacinia congue. Quisque ullamcorper orci nisi, vel aliquet lectus porta non. Praesent quis quam nec ex elementum accumsan. Etiam vitae rhoncus ante. Aenean eu leo in leo aliquam maximus.\\r\\n\\r\\nSed ac diam iaculis, rhoncus massa ut, consequat libero. Aenean mattis nisl a risus pellentesque scelerisque. Phasellus tincidunt risus vitae nibh congue tincidunt. Nam sed fermentum ipsum. Sed ut lacus pulvinar, tristique eros et, dignissim lorem. Maecenas at sapien porttitor, mollis sem a, viverra lectus. Donec eleifend tellus sapien, nec ultricies ligula luctus et.\\r\\n\\r\\nDuis feugiat imperdiet pharetra. Aenean semper lacus eu ligula sagittis, sit amet tempor risus luctus. Pellentesque ultrices malesuada tellus imperdiet auctor. Quisque venenatis ut massa sed bibendum. Donec vehicula gravida mi ac blandit. Ut scelerisque mattis neque id rhoncus. Vestibulum blandit lacus eget metus tincidunt finibus. Etiam vulputate blandit justo, eget interdum ipsum laoreet at. Sed nec condimentum erat. Aenean quis ex tincidunt, pulvinar urna ac, vulputate nulla. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.\\r\\n\\r\\nProin imperdiet, ante eget iaculis iaculis, ipsum nulla vestibulum nisi, sit amet ultrices nulla dui a augue. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris sit amet vestibulum elit. Nulla porttitor elit in risus viverra, eget commodo purus pulvinar. Curabitur sit amet suscipit justo, sit amet commodo ante. Quisque at neque tellus. Ut gravida, metus quis aliquam iaculis, nisl purus tristique velit, aliquam scelerisque risus turpis ultricies risus. Sed a pulvinar velit, eu porta justo.\\r\\n\\r\\nIn at euismod dolor. Cras et erat vulputate, rhoncus sem vel, feugiat diam. Cras malesuada consequat sollicitudin. In at libero nec ipsum ullamcorper pellentesque nec quis risus. Nulla pretium quam eget ex tincidunt, ut vulputate sapien rutrum. Nullam dignissim consectetur est, eget pretium eros egestas id. Aenean eget consequat tortor. Praesent eget lorem sed diam sodales suscipit et sed nibh. Ut in orci eget urna sollicitudin finibus. Morbi eu bibendum dolor. ",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ac est vel dolor ultricies pulvinar. Fusce dignissim auctor scelerisque. Integer porttitor hendrerit tellus ac condimentum. Mauris sodales nunc sed libero laoreet, id venenatis urna dignissim. Morbi vehicula augue felis, nec luctus dolor volutpat vel. Maecenas interdum lacinia congue. Quisque ullamcorper orci nisi, vel aliquet lectus porta non. Praesent quis quam nec ex elementum accumsan. Etiam vitae rhoncus ante. Aenean eu leo in leo aliquam maximus.</p>\\n<p>Sed ac diam iaculis, rhoncus massa ut, consequat libero. Aenean mattis nisl a risus pellentesque scelerisque. Phasellus tincidunt risus vitae nibh congue tincidunt. Nam sed fermentum ipsum. Sed ut lacus pulvinar, tristique eros et, dignissim lorem. Maecenas at sapien porttitor, mollis sem a, viverra lectus. Donec eleifend tellus sapien, nec ultricies ligula luctus et.</p>\\n<p>Duis feugiat imperdiet pharetra. Aenean semper lacus eu ligula sagittis, sit amet tempor risus luctus. Pellentesque ultrices malesuada tellus imperdiet auctor. Quisque venenatis ut massa sed bibendum. Donec vehicula gravida mi ac blandit. Ut scelerisque mattis neque id rhoncus. Vestibulum blandit lacus eget metus tincidunt finibus. Etiam vulputate blandit justo, eget interdum ipsum laoreet at. Sed nec condimentum erat. Aenean quis ex tincidunt, pulvinar urna ac, vulputate nulla. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.</p>\\n<p>Proin imperdiet, ante eget iaculis iaculis, ipsum nulla vestibulum nisi, sit amet ultrices nulla dui a augue. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris sit amet vestibulum elit. Nulla porttitor elit in risus viverra, eget commodo purus pulvinar. Curabitur sit amet suscipit justo, sit amet commodo ante. Quisque at neque tellus. Ut gravida, metus quis aliquam iaculis, nisl purus tristique velit, aliquam scelerisque risus turpis ultricies risus. Sed a pulvinar velit, eu porta justo.</p>\\n<p>In at euismod dolor. Cras et erat vulputate, rhoncus sem vel, feugiat diam. Cras malesuada consequat sollicitudin. In at libero nec ipsum ullamcorper pellentesque nec quis risus. Nulla pretium quam eget ex tincidunt, ut vulputate sapien rutrum. Nullam dignissim consectetur est, eget pretium eros egestas id. Aenean eget consequat tortor. Praesent eget lorem sed diam sodales suscipit et sed nibh. Ut in orci eget urna sollicitudin finibus. Morbi eu bibendum dolor.</p>\\n",
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
      \'language\' => \'en\',
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
      \'title\' => \'Glen Canyon\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'97697e91-4a6d-484a-a260-bc43dddf5381\',
      \'vid\' => NULL,
      \'vuuid\' => \'3407177c-d747-4073-a819-7fee6ca71ff8\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'This website hosts an administrative history of the Glen Canyon Dam Adaptive Management Program (GCDAMP) including the Adaptive Management Work Group (AMWG), Technical Work Group (TWG), the U.S. Geological Survey’s Grand Canyon Monitoring and Research Office (GCMRC), and the Bureau of Reclamation’s Glen Canyon Environmental Studies Program (GCES).\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>This website hosts an administrative history of the Glen Canyon Dam Adaptive Management Program (GCDAMP) including the Adaptive Management Work Group (AMWG), Technical Work Group (TWG), the U.S. Geological Survey’s Grand Canyon Monitoring and Research Office (GCMRC), and the Bureau of Reclamation’s Glen Canyon Environmental Studies Program (GCES).</p>\\n",
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
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'Main_Page-_WIKI_PIC-III.jpg\',
            \'uri\' => \'public://Main_Page-_WIKI_PIC-III.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'158764\',
            \'status\' => \'1\',
            \'timestamp\' => \'1510323083\',
            \'uuid\' => \'6cb305da-4108-44a8-bb1f-dfd7a553df7b\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'840\',
            \'height\' => \'525\',
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
