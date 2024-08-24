package com.rusefi.tools;

import com.opensr5.ini.DialogModel;
import com.opensr5.ini.IniFileModel;
import com.opensr5.ini.field.IniField;
import com.rusefi.RootHolder;
import com.rusefi.tools.tune.WriteSimulatorConfiguration;

import java.io.FileWriter;
import java.io.IOException;

public class ExportTooltipsForDocumentation {
    public static void main(String[] args) throws IOException {
//        RootHolder.ROOT = "../firmware/";

        IniFileModel ini = new IniFileModel().readIniFile(WriteSimulatorConfiguration.INI_FILE_FOR_SIMULATOR);

        try (FileWriter fw = new FileWriter("all_fields.md")) {

            writeAllFields(fw, ini);
        }
    }

    private static void writeAllFields(FileWriter fw, IniFileModel ini) throws IOException {
        for (DialogModel.Field f : ini.fieldsInUiOrder.values()) {
//            String fieldName = f.getKey();
//            IniField iniField = ini.allIniFields.get(f.getKey());

            String toolTip = ini.tooltips.get(f.getKey());

            if (toolTip != null) {

                fw.append("## " + f.getUiName() + "\n");

                fw.append(toolTip);
            }


        }
    }
}
